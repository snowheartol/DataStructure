

#include <stdio.h>
#include <stdlib.h>

#define V 5  // 图中顶点数量
#define E 7  // 图中边的数量

/*
 * 边结构体
 * src: 起始顶点
 * dest: 目标顶点
 * weight: 边的权重
 */
struct Edge {
    int src, dest, weight;
};

/*
 * 并查集结构
 * parent: 当前节点的父节点
 * rank: 当前集合的秩（用于优化合并操作）
 */
struct subset {
    int parent;
    int rank;
};

/*
 * 查找根节点（带路径压缩优化）
 * 参数:
 *   subsets: 并查集数组
 *   i: 要查找的节点
 * 返回值: 节点i所在集合的根节点
 */
int find(struct subset subsets[], int i) {
    // 如果当前节点不是根节点
    if (subsets[i].parent != i)
        // 递归查找根节点，并进行路径压缩
        subsets[i].parent = find(subsets, subsets[i].parent);
    return subsets[i].parent;
}

/*
 * 合并两个集合（按秩合并优化）
 * 参数:
 *   subsets: 并查集数组
 *   x, y: 要合并的两个节点
 */
void Union(struct subset subsets[], int x, int y) {
    int xroot = find(subsets, x);  // 找到x的根节点
    int yroot = find(subsets, y);  // 找到y的根节点

    // 按秩合并：将秩小的树合并到秩大的树下
    if (subsets[xroot].rank < subsets[yroot].rank)
        subsets[xroot].parent = yroot;
    else if (subsets[xroot].rank > subsets[yroot].rank)
        subsets[yroot].parent = xroot;
    else {
        // 秩相等时，任意选择一个作为根，并增加其秩
        subsets[yroot].parent = xroot;
        subsets[xroot].rank++;
    }
}

/*
 * 边比较函数（用于qsort排序）
 * 参数: a, b - 要比较的两个边指针
 * 返回值: 正数表示a>b，负数表示a<b，0表示相等
 */
int compare(const void* a, const void* b) {
    return ((struct Edge*)a)->weight - ((struct Edge*)b)->weight;
}

/*
 * Kruskal算法实现
 * 参数: edges - 图的边集数组
 */
void KruskalMST(struct Edge edges[]) {
    struct Edge result[V];  // 存储最小生成树的结果边
    int e = 0;              // 结果边的计数器
    int i = 0;              // 已排序边的索引

    // 初始化并查集
    struct subset* subsets = (struct subset*)malloc(V * sizeof(struct subset));
    for (int v = 0; v < V; v++) {
        subsets[v].parent = v;  // 每个顶点初始时都是自己的父节点
        subsets[v].rank = 0;    // 初始秩为0
    }

    // 步骤1: 对所有边按权重从小到大排序
    qsort(edges, E, sizeof(edges[0]), compare);

    // 步骤2: 遍历所有边，选择V-1条边构成最小生成树
    while (e < V - 1 && i < E) {
        // 取出当前最小权重的边
        struct Edge next_edge = edges[i++];

        // 找到两个端点所在的集合
        int x = find(subsets, next_edge.src);
        int y = find(subsets, next_edge.dest);

        // 如果两个端点不在同一集合（不会形成环）
        if (x != y) {
            // 将边加入结果集
            result[e++] = next_edge;
            // 合并两个集合
            Union(subsets, x, y);
        }
    }

    // 打印最小生成树结果
    printf("Kruskal算法结果:\n");
    for (i = 0; i < e; i++)
        printf("%d - %d \t权值: %d\n", result[i].src, result[i].dest, result[i].weight);

    // 释放并查集内存
    free(subsets);
}

/*
 * 示例图结构:
 *       2
 *   (0)------(1)
 *    | \     / |
 *    |  \6  /8 |
 *  6 |   \ /   | 5
 *    |  (3)   |
 *    |   |    |
 *    |  9|    |
 *    |   |    |
 *   (4)------(2)
 *       7
 *
 * 顶点: 0,1,2,3,4
 * 边集:
 *   {0,1,2}, {0,3,6}, {1,2,3},
 *   {1,3,8}, {1,4,5}, {2,4,7},
 *   {3,4,9}
 */

 /*
 int main() {
     // Kruskal算法测试
     struct Edge edges[E] = {
         {0, 1, 2}, {0, 3, 6}, {1, 2, 3},
         {1, 3, 8}, {1, 4, 5}, {2, 4, 7},
         {3, 4, 9}
     };
     KruskalMST(edges);

     return 0;
 }
 */
