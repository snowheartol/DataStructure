#include<iostream>

#define MaxSize 1024
typedef struct _edgeNode//�������ӵıߵĶ���
{
	int adjvex;//�ڽӶ���
	int weight;//Ȩ��
	struct _edgeNode* next;//��һ����
}edgeNode;
typedef struct _vertexNode//������
{
	char data;//�������
	struct _edgeNode* first;
}vertexNode, vertexList;

struct _adjListGraph
{
	vertexList* adjList;
	int  vex;//������
	int edge;//����
}adjListGraph;