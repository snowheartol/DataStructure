/*
 * 示例图结构（无向带权图）：
 *
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
 * 顶点说明：0-A, 1-B, 2-C, 3-D, 4-E
 * 邻接矩阵表示：
 *   [0] {0, 2, INF, 6, INF}
 *   [1] {2, 0, 3, 8, 5}
 *   [2] {INF, 3, 0, INF, 7}
 *   [3] {6, 8, INF, 0, 9}
 *   [4] {INF, 5, 7, 9, 0}
 */

/*
#include<iostream>
#define V 5//顶点数
#define INF INT_MAX
int graph[5][5] = {
	{0, 2, INF, 6, INF},
	{2, 0, 3, 8, 5},
	{INF, 3, 0, INF, 7},
	{6, 8, INF, 0, 9},
	{INF, 5, 7, 9, 0}
};
void primMST(int graph[V][V]) {
	int parent[V];//存储最小生成树的父节点
	int key[V];//存储顶点到树的距离
	bool mstSet[V];//记录顶点是否在MST中

	//初始化所有的距离均为无穷，所有顶点未加入MST
	for (int i = 0; i < V; i++)
	{
		key[i] = INF;
		mstSet[i] = false;
	}
	key[0] = 0;//从顶点0开始
	parent[0] = -1;//根节点无父节点

	for (int j = 0; j <V-1; j++)
	{
		//选择key最小的顶点（未加入MST）
		int u, min = INF;
		for (int i = 0; i < V; i++)
		{
			if (!mstSet[i] && key[i] < min) {
				min = key[i];
				u = i;
			}
		}
		mstSet[u] = true;//将顶点加入MST

		//更新相邻顶点的key值和父节点
		for (int i = 0; i < V; i++)
		{
			//若存在边且v未加入MST且新权重更小
			if (graph[u][i]&&!mstSet[i]&&graph[u][i]<key[i])
			{
				parent[i] = u;
				key[i] = graph[u][i];
			}
		}

	}
	// 打印MST
	printf("Prim算法结果:\n");
	for (int i = 1; i < V; i++)
		printf("%d - %d \t权值: %d\n", parent[i], i, graph[i][parent[i]]);

}

int main() {
	primMST(graph);
	return 0;
}


*/