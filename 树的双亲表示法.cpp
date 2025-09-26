/*
#include<iostream>
#define MAX_TREE_SIZE 100
using namespace std;
typedef struct PTNode {
	char data;
	int parent;//双亲位置索引（根结点为-1）
};
typedef struct PTree {
	PTNode nodes[MAX_TREE_SIZE];
	int n;
};
void initPTree(PTree* tree) {
	tree->n = 0;
}
// 添加节点
void addNode(PTree* tree, char data, int parentIdx) {
    if (tree->n >= MAX_TREE_SIZE) {
        printf("树已满，无法添加节点\n");
        return;
    }
    tree->nodes[tree->n].data = data;
    tree->nodes[tree->n].parent = parentIdx;
    tree->n++;
}

// 查找节点双亲
int findParent(PTree* tree, int idx) {
    if (idx < 0 || idx >= tree->n) {
        printf("无效索引\n");
        return -1;
    }
    return tree->nodes[idx].parent;
}
// 查找节点的所有孩子
void findChildren(PTree* tree, int idx) {
    if (idx < 0 || idx >= tree->n) {
        printf("无效索引\n");
        return;
    }

    printf("节点%c的孩子: ", tree->nodes[idx].data);
    int found = 0;
    for (int i = 0; i < tree->n; i++) {
        if (tree->nodes[i].parent == idx) {
            printf("%c ", tree->nodes[i].data);
            found = 1;
        }
    }
    if (!found) printf("无");
    printf("\n");
}
void testParentRepresentation() {
    printf("\n===== 双亲表示法测试 =====\n");
    PTree tree;
    initPTree(&tree);

    // 构建树结构：
    //      A
    //    /   \
    //   B     C
    //  / \     \
    // D   E     F

    addNode(&tree, 'A', -1); // 根节点A
    addNode(&tree, 'B', 0);
    addNode(&tree, 'C', 0);  // C的双亲是A
    addNode(&tree, 'D', 1);  // D的双亲是B(索引1)
    addNode(&tree, 'E', 1);  // E的双亲是B
    addNode(&tree, 'F', 2);  // F的双亲是C(索引2)

    // 测试查找双亲
    printf("B的双亲: %c\n", tree.nodes[findParent(&tree, 1)].data); // 应为A
    printf("F的双亲: %c\n", tree.nodes[findParent(&tree, 5)].data); // 应为C

    // 测试查找孩子
    findChildren(&tree, 0); // A的孩子: B C
    findChildren(&tree, 1); // B的孩子: D E
    findChildren(&tree, 2); // C的孩子: F
    findChildren(&tree, 3); // D的孩子: 无
}

int main() {
    testParentRepresentation();
    return 0;
}

*/