

#include <stdio.h>
#include <stdlib.h>

#define V 5  // ͼ�ж�������
#define E 7  // ͼ�бߵ�����

/*
 * �߽ṹ��
 * src: ��ʼ����
 * dest: Ŀ�궥��
 * weight: �ߵ�Ȩ��
 */
struct Edge {
    int src, dest, weight;
};

/*
 * ���鼯�ṹ
 * parent: ��ǰ�ڵ�ĸ��ڵ�
 * rank: ��ǰ���ϵ��ȣ������Ż��ϲ�������
 */
struct subset {
    int parent;
    int rank;
};

/*
 * ���Ҹ��ڵ㣨��·��ѹ���Ż���
 * ����:
 *   subsets: ���鼯����
 *   i: Ҫ���ҵĽڵ�
 * ����ֵ: �ڵ�i���ڼ��ϵĸ��ڵ�
 */
int find(struct subset subsets[], int i) {
    // �����ǰ�ڵ㲻�Ǹ��ڵ�
    if (subsets[i].parent != i)
        // �ݹ���Ҹ��ڵ㣬������·��ѹ��
        subsets[i].parent = find(subsets, subsets[i].parent);
    return subsets[i].parent;
}

/*
 * �ϲ��������ϣ����Ⱥϲ��Ż���
 * ����:
 *   subsets: ���鼯����
 *   x, y: Ҫ�ϲ��������ڵ�
 */
void Union(struct subset subsets[], int x, int y) {
    int xroot = find(subsets, x);  // �ҵ�x�ĸ��ڵ�
    int yroot = find(subsets, y);  // �ҵ�y�ĸ��ڵ�

    // ���Ⱥϲ�������С�����ϲ����ȴ������
    if (subsets[xroot].rank < subsets[yroot].rank)
        subsets[xroot].parent = yroot;
    else if (subsets[xroot].rank > subsets[yroot].rank)
        subsets[yroot].parent = xroot;
    else {
        // �����ʱ������ѡ��һ����Ϊ��������������
        subsets[yroot].parent = xroot;
        subsets[xroot].rank++;
    }
}

/*
 * �߱ȽϺ���������qsort����
 * ����: a, b - Ҫ�Ƚϵ�������ָ��
 * ����ֵ: ������ʾa>b��������ʾa<b��0��ʾ���
 */
int compare(const void* a, const void* b) {
    return ((struct Edge*)a)->weight - ((struct Edge*)b)->weight;
}

/*
 * Kruskal�㷨ʵ��
 * ����: edges - ͼ�ı߼�����
 */
void KruskalMST(struct Edge edges[]) {
    struct Edge result[V];  // �洢��С�������Ľ����
    int e = 0;              // ����ߵļ�����
    int i = 0;              // ������ߵ�����

    // ��ʼ�����鼯
    struct subset* subsets = (struct subset*)malloc(V * sizeof(struct subset));
    for (int v = 0; v < V; v++) {
        subsets[v].parent = v;  // ÿ�������ʼʱ�����Լ��ĸ��ڵ�
        subsets[v].rank = 0;    // ��ʼ��Ϊ0
    }

    // ����1: �����б߰�Ȩ�ش�С��������
    qsort(edges, E, sizeof(edges[0]), compare);

    // ����2: �������бߣ�ѡ��V-1���߹�����С������
    while (e < V - 1 && i < E) {
        // ȡ����ǰ��СȨ�صı�
        struct Edge next_edge = edges[i++];

        // �ҵ������˵����ڵļ���
        int x = find(subsets, next_edge.src);
        int y = find(subsets, next_edge.dest);

        // ��������˵㲻��ͬһ���ϣ������γɻ���
        if (x != y) {
            // ���߼�������
            result[e++] = next_edge;
            // �ϲ���������
            Union(subsets, x, y);
        }
    }

    // ��ӡ��С���������
    printf("Kruskal�㷨���:\n");
    for (i = 0; i < e; i++)
        printf("%d - %d \tȨֵ: %d\n", result[i].src, result[i].dest, result[i].weight);

    // �ͷŲ��鼯�ڴ�
    free(subsets);
}

/*
 * ʾ��ͼ�ṹ:
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
 * ����: 0,1,2,3,4
 * �߼�:
 *   {0,1,2}, {0,3,6}, {1,2,3},
 *   {1,3,8}, {1,4,5}, {2,4,7},
 *   {3,4,9}
 */

 /*
 int main() {
     // Kruskal�㷨����
     struct Edge edges[E] = {
         {0, 1, 2}, {0, 3, 6}, {1, 2, 3},
         {1, 3, 8}, {1, 4, 5}, {2, 4, 7},
         {3, 4, 9}
     };
     KruskalMST(edges);

     return 0;
 }
 */
