/*
#include<iostream>
#include <climits> // ����INT_MAX����
using namespace std;

// ��ͷ����ѭ��˫����
typedef struct CDLNode {
    int data = 0;
    struct CDLNode* front;
    struct CDLNode* next;
} *CDLinkList; // CDLinkList��CDLNodeָ��ı���

// ��ʼ��ʱͷ����ͷ��β��ָ���Լ�
CDLinkList InitList() {
    CDLinkList head = new CDLNode;
    head->data = INT_MAX; // ��֤ͷ������ݲ������
    head->front = head;
    head->next = head;
    return head;
}

// �ж������Ƿ�Ϊ��
bool isempty(CDLinkList List) {
    return List->next == List; // ʹ�ñȽ������ ==
}

// ��ͷ����ӽ��
void addLNode(CDLinkList List, int value) {
    CDLNode* newLNode = new CDLNode;
    newLNode->data = value;

    if (isempty(List)) { // ���������
        newLNode->front = List;
        newLNode->next = List;
        List->front = newLNode;
        List->next = newLNode;
    }
    else { // �ǿ��������
        newLNode->front = List;
        newLNode->next = List->next;
        List->next->front = newLNode;
        List->next = newLNode;
    }
}

// ɾ��ָ��ֵ�Ľ��
void deleteLNodeByValue(CDLinkList List, int value) {
    CDLNode* temp = List->next; // �ӵ�һ���ڵ㿪ʼ
    bool found = false;

    while (temp != List) { // ����ֱ���ص�ͷ���
        if (temp->data == value) {
            found = true;
            CDLNode* nextNode = temp->next; // ������һ���ڵ�

            // ����ָ��
            temp->front->next = temp->next;
            temp->next->front = temp->front;

            // ���ɾ������β�ڵ㣬����ͷ����front
            if (List->front == temp) {
                List->front = temp->front;
            }

            // ɾ����ǰ�ڵ�
            delete temp;
            temp = nextNode; // �ƶ�����һ���ڵ�
        }
        else {
            temp = temp->next;
        }
    }

    if (!found) {
        cout << "Can't find out" << endl;
    }
}

// ��ӡ��������������
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
    // ��������
    CDLinkList myList = InitList();

    // ��ӽڵ�
    addLNode(myList, 30);
    addLNode(myList, 20);
    addLNode(myList, 10);

    // ��ӡ����
    printList(myList); // 10 <-> 20 <-> 30

    // ɾ���ڵ�
    deleteLNodeByValue(myList, 20);
    printList(myList); // 10 <-> 30

    // ����ɾ�������ڵĽڵ�
    deleteLNodeByValue(myList, 50); // Can't find out

    return 0;
}
*/