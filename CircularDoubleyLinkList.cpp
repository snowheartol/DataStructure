/*
#include<iostream>
#include <climits> // 包含INT_MAX定义
using namespace std;

// 带头结点的循环双链表
typedef struct CDLNode {
    int data = 0;
    struct CDLNode* front;
    struct CDLNode* next;
} *CDLinkList; // CDLinkList是CDLNode指针的别名

// 初始化时头结点的头和尾都指向自己
CDLinkList InitList() {
    CDLinkList head = new CDLNode;
    head->data = INT_MAX; // 保证头结点数据不会出现
    head->front = head;
    head->next = head;
    return head;
}

// 判断链表是否为空
bool isempty(CDLinkList List) {
    return List->next == List; // 使用比较运算符 ==
}

// 在头处添加结点
void addLNode(CDLinkList List, int value) {
    CDLNode* newLNode = new CDLNode;
    newLNode->data = value;

    if (isempty(List)) { // 空链表情况
        newLNode->front = List;
        newLNode->next = List;
        List->front = newLNode;
        List->next = newLNode;
    }
    else { // 非空链表情况
        newLNode->front = List;
        newLNode->next = List->next;
        List->next->front = newLNode;
        List->next = newLNode;
    }
}

// 删除指定值的结点
void deleteLNodeByValue(CDLinkList List, int value) {
    CDLNode* temp = List->next; // 从第一个节点开始
    bool found = false;

    while (temp != List) { // 遍历直到回到头结点
        if (temp->data == value) {
            found = true;
            CDLNode* nextNode = temp->next; // 保存下一个节点

            // 调整指针
            temp->front->next = temp->next;
            temp->next->front = temp->front;

            // 如果删除的是尾节点，更新头结点的front
            if (List->front == temp) {
                List->front = temp->front;
            }

            // 删除当前节点
            delete temp;
            temp = nextNode; // 移动到下一个节点
        }
        else {
            temp = temp->next;
        }
    }

    if (!found) {
        cout << "Can't find out" << endl;
    }
}

// 打印链表（辅助函数）
void printList(CDLinkList list) {
    if (isempty(list)) {
        cout << "Empty List" << endl;
        return;
    }

    cout << "List: ";
    CDLNode* p = list->next;
    while (p != list) {
        cout << p->data;
        if (p->next != list) cout << " <-> ";
        p = p->next;
    }
    cout << endl;
}

int main() {
    // 创建链表
    CDLinkList myList = InitList();

    // 添加节点
    addLNode(myList, 30);
    addLNode(myList, 20);
    addLNode(myList, 10);

    // 打印链表
    printList(myList); // 10 <-> 20 <-> 30

    // 删除节点
    deleteLNodeByValue(myList, 20);
    printList(myList); // 10 <-> 30

    // 尝试删除不存在的节点
    deleteLNodeByValue(myList, 50); // Can't find out

    return 0;
}
*/