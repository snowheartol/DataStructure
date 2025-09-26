/*
#include<iostream>
#include<stdio.h>
#define MAX_TREE_SIZE 100
using namespace std;
typedef struct ChildLNode{
	int childIdx;//孩子结点在数组中的下标
	struct ChildLNode* next;
};


//表头结点结构
typedef struct headLNode{
	char data;
	ChildLNode* fristChild;
};

//树结构
typedef struct Tree {
	headLNode nodes[MAX_TREE_SIZE];//结点数组
	int now;//当前结点位置
	int root;//根结点位置
};


void initTree(Tree* tree) {
	tree->now = 0;
	tree->root = -1;
	for (int i = 0; i < MAX_TREE_SIZE; i++)
	{
		tree->nodes[i].fristChild = NULL;
	}
}

//添加结点
void addNode(Tree* tree,char data) {
	if (tree->now==MAX_TREE_SIZE)
	{
		cout << "Full"<<endl;
	}
	else
	{
		tree->nodes[tree->now].data = data;
		tree->now++;
	}
}
//添加孩子关系
void addChild(Tree* tree, int parentIdx, int childIdx) {
	if (parentIdx<0||parentIdx>=tree->now||
		childIdx<0||childIdx>=tree->now)
	{
		cout << "the index is error" << endl;
		return;
	}
	//创建新的孩子结点
	ChildLNode* newChild = new ChildLNode;
	if (!newChild)
	{
		cout << " allocate memory fail" << endl;
		return;
	}
	newChild->childIdx = childIdx;
	newChild->next = nullptr;

	//头插法插入孩子链表
	if (tree->nodes[parentIdx].fristChild==nullptr)
	{
		tree->nodes[parentIdx].fristChild = newChild;
	}
	else {
		//插入到链表头部
		newChild->next = tree->nodes[parentIdx].fristChild;
		tree->nodes[parentIdx].fristChild = newChild;
	}
}

//查找结点的所有孩子
void findChildren(Tree* tree, int idx) {
	if (idx<0||idx>=tree->now)
	{
		cout << "error index" << endl; 
		return;
	}
	cout << "结点" << tree->nodes[idx].data<<"的孩子";
	ChildLNode* p = tree->nodes[idx].fristChild;
	if (!p) {
		printf("无");
	}
	else {
		while (p) {
			printf("%c ", tree->nodes[p->childIdx].data);
			p = p->next;
		}
	}
	printf("\n");
}
// 查找节点的双亲
int findParent(Tree* tree, int idx) {
	if (idx < 0 || idx >= tree->now) {
		printf("无效索引\n");
		return -1;
	}

	// 遍历所有节点，查找包含该孩子索引的节点
	for (int i = 0; i < tree->now; i++) {
		ChildLNode* p = tree->nodes[i].fristChild;
		while (p) {
			if (p->childIdx == idx) {
				return i;
			}
			p = p->next;
		}
	}
	return -1; // 没找到双亲（可能是根节点）
}

//测试函数
void testChildRepresentation() {
	printf("\n===== 孩子表示法测试 =====\n");
	Tree tree;
	initTree(&tree);

	// 构建树结构：
	//      A
	//    /   \
    //   B     C
	//  / \     \
    // D   E     F

	addNode(&tree, 'A'); // 索引0
	addNode(&tree, 'B'); // 索引1
	addNode(&tree, 'C'); // 索引2
	addNode(&tree, 'D'); // 索引3
	addNode(&tree, 'E'); // 索引4
	addNode(&tree, 'F'); // 索引5

	// 建立关系
	addChild(&tree, 0, 1); // A->B
	addChild(&tree, 0, 2); // A->C
	addChild(&tree, 1, 3); // B->D
	addChild(&tree, 1, 4); // B->E
	addChild(&tree, 2, 5); // C->F

	// 测试查找孩子
	findChildren(&tree, 0); // A的孩子: C B (头插法导致逆序)
	findChildren(&tree, 1); // B的孩子: E D
	findChildren(&tree, 2); // C的孩子: F
	findChildren(&tree, 3); // D的孩子: 无

	// 测试查找双亲
	printf("B的双亲: %c\n", tree.nodes[findParent(&tree, 1)].data); // 应为A
	printf("F的双亲: %c\n", tree.nodes[findParent(&tree, 5)].data); // 应为C
}
int main() {
	testChildRepresentation();
	return 0;
}

*/