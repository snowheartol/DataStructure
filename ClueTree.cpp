/*

#include<iostream>
using namespace std;
typedef struct TreeLNode {
	int data;
	struct  TreeLNode* Lchild=nullptr;
	struct TreeLNode* Rchild=nullptr;
	int Ltag;
	int Rtag;

	//����к��ӽ�����עΪ0�����Ϊǰ�����̵�������Ϊ1
}*Tree;


//ͨ���������������������������
void CreatInClueTree(Tree T) {
	Tree pre = nullptr;
	if (T!=nullptr)
	{
		InClueTree(T, pre);
		pre->Rchild = nullptr;
		pre->Rtag = 1;
	}
}


//�������������
void PreClueTree(Tree& T,Tree& Pre) {

}
//�������������
void InClueTree(Tree& T,Tree& Pre) {
	if (T!=nullptr)
	{
		InClueTree(T->Lchild, Pre);
		if (T->Lchild==nullptr)
		{
			T->Lchild = Pre;
			T->Ltag = 1;
		}
		if (Pre!=nullptr&&Pre->Rchild==nullptr)
		{
			Pre->Rchild = T;
			Pre->Rtag = 1;
		}
		Pre = T;
		InClueTree(T->Rchild, Pre);
	}
}
//���������������ı���
//�����������������������µĵ�һ�����
TreeLNode* FirstLNode(Tree) {

}

//������������������
void PostClueTree() {


}

*/