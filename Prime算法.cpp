/*
 * ʾ��ͼ�ṹ�������Ȩͼ����
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
 * ����˵����0-A, 1-B, 2-C, 3-D, 4-E
 * �ڽӾ����ʾ��
 *   [0] {0, 2, INF, 6, INF}
 *   [1] {2, 0, 3, 8, 5}
 *   [2] {INF, 3, 0, INF, 7}
 *   [3] {6, 8, INF, 0, 9}
 *   [4] {INF, 5, 7, 9, 0}
 */

/*
#include<iostream>
#define V 5//������
#define INF INT_MAX
int graph[5][5] = {
	{0, 2, INF, 6, INF},
	{2, 0, 3, 8, 5},
	{INF, 3, 0, INF, 7},
	{6, 8, INF, 0, 9},
	{INF, 5, 7, 9, 0}
};
void primMST(int graph[V][V]) {
	int parent[V];//�洢��С�������ĸ��ڵ�
	int key[V];//�洢���㵽���ľ���
	bool mstSet[V];//��¼�����Ƿ���MST��

	//��ʼ�����еľ����Ϊ������ж���δ����MST
	for (int i = 0; i < V; i++)
	{
		key[i] = INF;
		mstSet[i] = false;
	}
	key[0] = 0;//�Ӷ���0��ʼ
	parent[0] = -1;//���ڵ��޸��ڵ�

	for (int j = 0; j <V-1; j++)
	{
		//ѡ��key��С�Ķ��㣨δ����MST��
		int u, min = INF;
		for (int i = 0; i < V; i++)
		{
			if (!mstSet[i] && key[i] < min) {
				min = key[i];
				u = i;
			}
		}
		mstSet[u] = true;//���������MST

		//�������ڶ����keyֵ�͸��ڵ�
		for (int i = 0; i < V; i++)
		{
			//�����ڱ���vδ����MST����Ȩ�ظ�С
			if (graph[u][i]&&!mstSet[i]&&graph[u][i]<key[i])
			{
				parent[i] = u;
				key[i] = graph[u][i];
			}
		}

	}
	// ��ӡMST
	printf("Prim�㷨���:\n");
	for (int i = 1; i < V; i++)
		printf("%d - %d \tȨֵ: %d\n", parent[i], i, graph[i][parent[i]]);

}

int main() {
	primMST(graph);
	return 0;
}


*/