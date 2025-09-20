#include<iostream>

#define MaxSize 1024
typedef struct _edgeNode//与结点连接的边的定义
{
	int adjvex;//邻接顶点
	int weight;//权重
	struct _edgeNode* next;//下一条边
}edgeNode;
typedef struct _vertexNode//顶点结点
{
	char data;//结点数据
	struct _edgeNode* first;
}vertexNode, vertexList;

struct _adjListGraph
{
	vertexList* adjList;
	int  vex;//顶点数
	int edge;//边数
}adjListGraph;