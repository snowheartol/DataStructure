#include<iostream>
using namespace std;

typedef struct TreeLNode {
	int data;
	struct TreeLNode* Lchild = nullptr;
	struct TreeLNode* Rchild = nullptr;
}*Tree;

// ��ʼ�������
Tree InitTree(int value) {
	Tree root = new TreeLNode;
	root->data = value;
	return root;
}

// ���ʽڵ㣨������ݣ�
void Visit(Tree tree) {
	if (tree != nullptr) {
		cout << tree->data << " ";
	}
}

// �������
void PreOrder(Tree tree) {
	if (tree != nullptr) {
		Visit(tree);
		PreOrder(tree->Lchild);
		PreOrder(tree->Rchild);
	}
}

// �������
void InOrder(Tree tree) {
	if (tree != nullptr) {
		InOrder(tree->Lchild);
		Visit(tree);
		InOrder(tree->Rchild);
	}
}

// �������
void PostOrder(Tree tree) {
	if (tree != nullptr) {
		PostOrder(tree->Lchild);
		PostOrder(tree->Rchild);
		Visit(tree);
	}
}

// ���ҽڵ�
Tree FindNode(Tree tree, int value) {
	if (tree == nullptr) return nullptr;
	if (tree->data == value) return tree;

	Tree leftResult = FindNode(tree->Lchild, value);
	if (leftResult) return leftResult;

	return FindNode(tree->Rchild, value);
}

// �ͷŶ������ڴ� - �Ƶ�AddLchild��AddRchild֮ǰ
void DeleteTree(Tree& tree) {
	if (tree != nullptr) {
		DeleteTree(tree->Lchild);
		DeleteTree(tree->Rchild);
		delete tree;
		tree = nullptr;
	}
}

// �������
void AddLchild(Tree& tree, int value, int newvalue) {
	if (tree == nullptr) return;

	if (tree->data == value) {
		// �ݹ�ɾ��������
		if (tree->Lchild != nullptr) {
			DeleteTree(tree->Lchild);
		}

		// �����½ڵ�
		tree->Lchild = new TreeLNode;
		tree->Lchild->data = newvalue;
		tree->Lchild->Lchild = nullptr;
		tree->Lchild->Rchild = nullptr;
		return;
	}

	// �ݹ������������
	AddLchild(tree->Lchild, value, newvalue);
	AddLchild(tree->Rchild, value, newvalue);
}

// ����Һ���
void AddRchild(Tree& tree, int value, int newvalue) {
	if (tree == nullptr) return;

	if (tree->data == value) {
		// �ݹ�ɾ��������
		if (tree->Rchild != nullptr) {
			DeleteTree(tree->Rchild);
		}

		// �����½ڵ�
		tree->Rchild = new TreeLNode;
		tree->Rchild->data = newvalue;
		tree->Rchild->Lchild = nullptr;
		tree->Rchild->Rchild = nullptr;
		return;
	}

	// �ݹ������������
	AddRchild(tree->Lchild, value, newvalue);
	AddRchild(tree->Rchild, value, newvalue);
}

int main() {
	// ����������
	Tree root = InitTree(1);

	// �������
	AddLchild(root, 1, 3);

	// ����Һ���
	AddRchild(root, 1, 4);

	// ���������������
	AddLchild(root, 3, 5);

	cout << "�������: ";
	PreOrder(root);
	cout << endl;

	cout << "�������: ";
	InOrder(root);
	cout << endl;

	cout << "�������: ";
	PostOrder(root);
	cout << endl;

	// �ͷ��ڴ�
	DeleteTree(root);

	return 0;
}