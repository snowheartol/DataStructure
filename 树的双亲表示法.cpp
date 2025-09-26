/*
#include<iostream>
#define MAX_TREE_SIZE 100
using namespace std;
typedef struct PTNode {
	char data;
	int parent;//˫��λ�������������Ϊ-1��
};
typedef struct PTree {
	PTNode nodes[MAX_TREE_SIZE];
	int n;
};
void initPTree(PTree* tree) {
	tree->n = 0;
}
// ��ӽڵ�
void addNode(PTree* tree, char data, int parentIdx) {
    if (tree->n >= MAX_TREE_SIZE) {
        printf("���������޷���ӽڵ�\n");
        return;
    }
    tree->nodes[tree->n].data = data;
    tree->nodes[tree->n].parent = parentIdx;
    tree->n++;
}

// ���ҽڵ�˫��
int findParent(PTree* tree, int idx) {
    if (idx < 0 || idx >= tree->n) {
        printf("��Ч����\n");
        return -1;
    }
    return tree->nodes[idx].parent;
}
// ���ҽڵ�����к���
void findChildren(PTree* tree, int idx) {
    if (idx < 0 || idx >= tree->n) {
        printf("��Ч����\n");
        return;
    }

    printf("�ڵ�%c�ĺ���: ", tree->nodes[idx].data);
    int found = 0;
    for (int i = 0; i < tree->n; i++) {
        if (tree->nodes[i].parent == idx) {
            printf("%c ", tree->nodes[i].data);
            found = 1;
        }
    }
    if (!found) printf("��");
    printf("\n");
}
void testParentRepresentation() {
    printf("\n===== ˫�ױ�ʾ������ =====\n");
    PTree tree;
    initPTree(&tree);

    // �������ṹ��
    //      A
    //    /   \
    //   B     C
    //  / \     \
    // D   E     F

    addNode(&tree, 'A', -1); // ���ڵ�A
    addNode(&tree, 'B', 0);
    addNode(&tree, 'C', 0);  // C��˫����A
    addNode(&tree, 'D', 1);  // D��˫����B(����1)
    addNode(&tree, 'E', 1);  // E��˫����B
    addNode(&tree, 'F', 2);  // F��˫����C(����2)

    // ���Բ���˫��
    printf("B��˫��: %c\n", tree.nodes[findParent(&tree, 1)].data); // ӦΪA
    printf("F��˫��: %c\n", tree.nodes[findParent(&tree, 5)].data); // ӦΪC

    // ���Բ��Һ���
    findChildren(&tree, 0); // A�ĺ���: B C
    findChildren(&tree, 1); // B�ĺ���: D E
    findChildren(&tree, 2); // C�ĺ���: F
    findChildren(&tree, 3); // D�ĺ���: ��
}

int main() {
    testParentRepresentation();
    return 0;
}

*/