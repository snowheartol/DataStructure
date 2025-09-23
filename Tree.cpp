#include<iostream>
using namespace std;

typedef struct TreeLNode {
	int data;
	struct TreeLNode* Lchild = nullptr;
	struct TreeLNode* Rchild = nullptr;
}*Tree;

// 初始化根结点
Tree InitTree(int value) {
	Tree root = new TreeLNode;
	root->data = value;
	return root;
}

// 访问节点（输出数据）
void Visit(Tree tree) {
	if (tree != nullptr) {
		cout << tree->data << " ";
	}
}

// 先序遍历
void PreOrder(Tree tree) {
	if (tree != nullptr) {
		Visit(tree);
		PreOrder(tree->Lchild);
		PreOrder(tree->Rchild);
	}
}

// 中序遍历
void InOrder(Tree tree) {
	if (tree != nullptr) {
		InOrder(tree->Lchild);
		Visit(tree);
		InOrder(tree->Rchild);
	}
}

// 后序遍历
void PostOrder(Tree tree) {
	if (tree != nullptr) {
		PostOrder(tree->Lchild);
		PostOrder(tree->Rchild);
		Visit(tree);
	}
}

// 查找节点
Tree FindNode(Tree tree, int value) {
	if (tree == nullptr) return nullptr;
	if (tree->data == value) return tree;

	Tree leftResult = FindNode(tree->Lchild, value);
	if (leftResult) return leftResult;

	return FindNode(tree->Rchild, value);
}

// 释放二叉树内存 - 移到AddLchild和AddRchild之前
void DeleteTree(Tree& tree) {
	if (tree != nullptr) {
		DeleteTree(tree->Lchild);
		DeleteTree(tree->Rchild);
		delete tree;
		tree = nullptr;
	}
}

// 添加左孩子
void AddLchild(Tree& tree, int value, int newvalue) {
	if (tree == nullptr) return;

	if (tree->data == value) {
		// 递归删除左子树
		if (tree->Lchild != nullptr) {
			DeleteTree(tree->Lchild);
		}

		// 创建新节点
		tree->Lchild = new TreeLNode;
		tree->Lchild->data = newvalue;
		tree->Lchild->Lchild = nullptr;
		tree->Lchild->Rchild = nullptr;
		return;
	}

	// 递归查找左右子树
	AddLchild(tree->Lchild, value, newvalue);
	AddLchild(tree->Rchild, value, newvalue);
}

// 添加右孩子
void AddRchild(Tree& tree, int value, int newvalue) {
	if (tree == nullptr) return;

	if (tree->data == value) {
		// 递归删除右子树
		if (tree->Rchild != nullptr) {
			DeleteTree(tree->Rchild);
		}

		// 创建新节点
		tree->Rchild = new TreeLNode;
		tree->Rchild->data = newvalue;
		tree->Rchild->Lchild = nullptr;
		tree->Rchild->Rchild = nullptr;
		return;
	}

	// 递归查找左右子树
	AddRchild(tree->Lchild, value, newvalue);
	AddRchild(tree->Rchild, value, newvalue);
}

int main() {
	// 创建二叉树
	Tree root = InitTree(1);

	// 添加左孩子
	AddLchild(root, 1, 3);

	// 添加右孩子
	AddRchild(root, 1, 4);

	// 在左孩子上添加左孩子
	AddLchild(root, 3, 5);

	cout << "先序遍历: ";
	PreOrder(root);
	cout << endl;

	cout << "中序遍历: ";
	InOrder(root);
	cout << endl;

	cout << "后序遍历: ";
	PostOrder(root);
	cout << endl;

	// 释放内存
	DeleteTree(root);

	return 0;
}