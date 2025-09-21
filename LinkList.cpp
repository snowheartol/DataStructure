/*
#include<iostream>
using namespace std;

typedef struct LNode {
    int data;  
    struct LNode* next;
} LinkList;

// ��ʼ������
LinkList* initList() {
    LinkList* head = new LNode;
    head->next = nullptr;
    head->data = 0;  // ͷ������ݿɴ洢������
    return head;     
}

// �ж��Ƿ�Ϊ��
bool isEmpty(LinkList* List) {
    return List->next == nullptr;  
}

// ����������
int ListLength(LinkList* List) {
    LinkList* temp = List->next;  // ��ͷ����ʼ
    int n = 0;
    while (temp != nullptr) {
        n++;
        temp = temp->next;
    }
    return n;
}

// ����Ų��ҽ��
LNode* selectNodeByIndex(LinkList* List, int i) {
    if (i < 1) return nullptr;  // ��Ŵ�1��ʼ

    LinkList* temp = List->next;  // ��һ�����ݽڵ�
    int count = 1;

    while (temp != nullptr && count < i) {
        temp = temp->next;
        count++;
    }
    return temp;  // �ҵ����ؽڵ㣬����nullptr
}

// ��ֵ���ҽ��
LNode* selectNodeByValue(LinkList* List, int value) {
    LinkList* temp = List->next;  // ��ͷ����ʼ

    while (temp != nullptr) {
        if (temp->data == value) {
            return temp;
        }
        temp = temp->next;
    }
    return nullptr;  // δ�ҵ�
}

// ������
bool insertNode(LinkList* List, int value, int i) {
    if (i < 1) return false;  // λ����Ч

    LinkList* p = List;
    int count = 0;

    // �ҵ�����λ�õ�ǰ���ڵ�
    while (p != nullptr && count < i - 1) {
        p = p->next;
        count++;
    }

    if (p == nullptr) return false;  // λ�ó�����Χ

    LNode* newNode = new LNode;
    newNode->data = value;
    newNode->next = p->next;
    p->next = newNode;
    return true;
}

// ��������
void destroyList(LinkList* List) {
    LinkList* p = List;
    while (p != nullptr) {
        LinkList* temp = p;
        p = p->next;
        delete temp;
    }
}


//��ͷ���ӽ��
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


 
// ��������
int main() {
    LinkList* list = initList();

    // �������
    insertNode(list, 10, 1);
    insertNode(list, 20, 2);
    insertNode(list, 30, 3);

    //��Ӳ���
    addLNode(*list,6);

    // ���Ȳ���
    cout << "Length: " << ListLength(list) << endl;

    // ���Ҳ���
    LNode* node = selectNodeByIndex(list, 2);
    if (node) cout << "Found at index 2: " << node->data << endl;

    node = selectNodeByValue(list, 30);
    if (node) cout << "Found value 30" << endl;

    // ��������
    destroyList(list);
    return 0;
}
*/