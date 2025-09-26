/*
#include<iostream>
#include<stdio.h>
#define MAX_TREE_SIZE 100
using namespace std;
typedef struct ChildLNode{
	int childIdx;//���ӽ���������е��±�
	struct ChildLNode* next;
};


//��ͷ���ṹ
typedef struct headLNode{
	char data;
	ChildLNode* fristChild;
};

//���ṹ
typedef struct Tree {
	headLNode nodes[MAX_TREE_SIZE];//�������
	int now;//��ǰ���λ��
	int root;//�����λ��
};


void initTree(Tree* tree) {
	tree->now = 0;
	tree->root = -1;
	for (int i = 0; i < MAX_TREE_SIZE; i++)
	{
		tree->nodes[i].fristChild = NULL;
	}
}

//��ӽ��
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
//��Ӻ��ӹ�ϵ
void addChild(Tree* tree, int parentIdx, int childIdx) {
	if (parentIdx<0||parentIdx>=tree->now||
		childIdx<0||childIdx>=tree->now)
	{
		cout << "the index is error" << endl;
		return;
	}
	//�����µĺ��ӽ��
	ChildLNode* newChild = new ChildLNode;
	if (!newChild)
	{
		cout << " allocate memory fail" << endl;
		return;
	}
	newChild->childIdx = childIdx;
	newChild->next = nullptr;

	//ͷ�巨���뺢������
	if (tree->nodes[parentIdx].fristChild==nullptr)
	{
		tree->nodes[parentIdx].fristChild = newChild;
	}
	else {
		//���뵽����ͷ��
		newChild->next = tree->nodes[parentIdx].fristChild;
		tree->nodes[parentIdx].fristChild = newChild;
	}
}

//���ҽ������к���
void findChildren(Tree* tree, int idx) {
	if (idx<0||idx>=tree->now)
	{
		cout << "error index" << endl; 
		return;
	}
	cout << "���" << tree->nodes[idx].data<<"�ĺ���";
	ChildLNode* p = tree->nodes[idx].fristChild;
	if (!p) {
		printf("��");
	}
	else {
		while (p) {
			printf("%c ", tree->nodes[p->childIdx].data);
			p = p->next;
		}
	}
	printf("\n");
}
// ���ҽڵ��˫��
int findParent(Tree* tree, int idx) {
	if (idx < 0 || idx >= tree->now) {
		printf("��Ч����\n");
		return -1;
	}

	// �������нڵ㣬���Ұ����ú��������Ľڵ�
	for (int i = 0; i < tree->now; i++) {
		ChildLNode* p = tree->nodes[i].fristChild;
		while (p) {
			if (p->childIdx == idx) {
				return i;
			}
			p = p->next;
		}
	}
	return -1; // û�ҵ�˫�ף������Ǹ��ڵ㣩
}

//���Ժ���
void testChildRepresentation() {
	printf("\n===== ���ӱ�ʾ������ =====\n");
	Tree tree;
	initTree(&tree);

	// �������ṹ��
	//      A
	//    /   \
    //   B     C
	//  / \     \
    // D   E     F

	addNode(&tree, 'A'); // ����0
	addNode(&tree, 'B'); // ����1
	addNode(&tree, 'C'); // ����2
	addNode(&tree, 'D'); // ����3
	addNode(&tree, 'E'); // ����4
	addNode(&tree, 'F'); // ����5

	// ������ϵ
	addChild(&tree, 0, 1); // A->B
	addChild(&tree, 0, 2); // A->C
	addChild(&tree, 1, 3); // B->D
	addChild(&tree, 1, 4); // B->E
	addChild(&tree, 2, 5); // C->F

	// ���Բ��Һ���
	findChildren(&tree, 0); // A�ĺ���: C B (ͷ�巨��������)
	findChildren(&tree, 1); // B�ĺ���: E D
	findChildren(&tree, 2); // C�ĺ���: F
	findChildren(&tree, 3); // D�ĺ���: ��

	// ���Բ���˫��
	printf("B��˫��: %c\n", tree.nodes[findParent(&tree, 1)].data); // ӦΪA
	printf("F��˫��: %c\n", tree.nodes[findParent(&tree, 5)].data); // ӦΪC
}
int main() {
	testChildRepresentation();
	return 0;
}

*/