/*

#include<iostream>
using namespace std;
typedef struct TreeLNode {
	int data;
	struct  TreeLNode* Lchild=nullptr;
	struct TreeLNode* Rchild=nullptr;
	int Ltag;
	int Rtag;

	//如果有孩子结点则标注为0，如果为前驱或后继的线索则为1
}*Tree;


//通过中序遍历建立中序线索二叉树
void CreatInClueTree(Tree T) {
	Tree pre = nullptr;
	if (T!=nullptr)
	{
		InClueTree(T, pre);
		pre->Rchild = nullptr;
		pre->Rtag = 1;
	}
}


//先序二叉树构造
void PreClueTree(Tree& T,Tree& Pre) {

}
//中序二叉树构造
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
//中序线索二叉树的遍历
//求中序线索二叉树的中序下的第一个结点
TreeLNode* FirstLNode(Tree) {

}

//后序线索二叉树构造
void PostClueTree() {


}

*/