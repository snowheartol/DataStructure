/*
#include<iostream>
using namespace std;

typedef struct LNode {
    int data;  
    struct LNode* next;
} LinkList;

// 初始化链表
LinkList* initList() {
    LinkList* head = new LNode;
    head->next = nullptr;
    head->data = 0;  // 头结点数据可存储链表长度
    return head;     
}

// 判断是否为空
bool isEmpty(LinkList* List) {
    return List->next == nullptr;  
}

// 计算链表长度
int ListLength(LinkList* List) {
    LinkList* temp = List->next;  // 从头结点后开始
    int n = 0;
    while (temp != nullptr) {
        n++;
        temp = temp->next;
    }
    return n;
}

// 按序号查找结点
LNode* selectNodeByIndex(LinkList* List, int i) {
    if (i < 1) return nullptr;  // 序号从1开始

    LinkList* temp = List->next;  // 第一个数据节点
    int count = 1;

    while (temp != nullptr && count < i) {
        temp = temp->next;
        count++;
    }
    return temp;  // 找到返回节点，否则nullptr
}

// 按值查找结点
LNode* selectNodeByValue(LinkList* List, int value) {
    LinkList* temp = List->next;  // 从头结点后开始

    while (temp != nullptr) {
        if (temp->data == value) {
            return temp;
        }
        temp = temp->next;
    }
    return nullptr;  // 未找到
}

// 插入结点
bool insertNode(LinkList* List, int value, int i) {
    if (i < 1) return false;  // 位置无效

    LinkList* p = List;
    int count = 0;

    // 找到插入位置的前驱节点
    while (p != nullptr && count < i - 1) {
        p = p->next;
        count++;
    }

    if (p == nullptr) return false;  // 位置超出范围

    LNode* newNode = new LNode;
    newNode->data = value;
    newNode->next = p->next;
    p->next = newNode;
    return true;
}

// 销毁链表
void destroyList(LinkList* List) {
    LinkList* p = List;
    while (p != nullptr) {
        LinkList* temp = p;
        p = p->next;
        delete temp;
    }
}


//在头增加结点
void addLNode(LinkList& List,int value) {
    LNode* newLNode = new LNode;
    newLNode->data = value;
    LinkList* L = &List;
    if (L->next==nullptr)
    {

        L->next=newLNode;
    }
    else
    {

        newLNode->next = L->next;
        L->next = newLNode;
    }
}


 
// 测试用例
int main() {
    LinkList* list = initList();

    // 插入测试
    insertNode(list, 10, 1);
    insertNode(list, 20, 2);
    insertNode(list, 30, 3);

    //添加测试
    addLNode(*list,6);

    // 长度测试
    cout << "Length: " << ListLength(list) << endl;

    // 查找测试
    LNode* node = selectNodeByIndex(list, 2);
    if (node) cout << "Found at index 2: " << node->data << endl;

    node = selectNodeByValue(list, 30);
    if (node) cout << "Found value 30" << endl;

    // 销毁链表
    destroyList(list);
    return 0;
}
*/