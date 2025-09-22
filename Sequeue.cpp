/*
#include<iostream>
using namespace std;

typedef struct LNode {
    int data;
    struct LNode* next;
} LNode;

typedef struct CirQueue {
    LNode* front;
    LNode* rear;
};

// ��ʼ��ѭ������
void initQueue(CirQueue& queue) {
    queue.front = nullptr;
    queue.rear = nullptr;
}

bool isEmpty(CirQueue queue) {
    return queue.front == nullptr;
}

// ��Ӳ���
void enqueue(CirQueue& queue, int value) {
    LNode* newNode = new LNode;
    newNode->data = value;

    if (isEmpty(queue)) {
        // ��һ���ڵ㣬�γ��Ի�
        newNode->next = newNode;
        queue.front = newNode;
        queue.rear = newNode;
    }
    else {
        // ��ӵ�β��������ѭ��
        newNode->next = queue.front;  // �½ڵ�ָ��ͷ�ڵ��γɻ�
        queue.rear->next = newNode;   // ԭβ�ڵ�ָ���½ڵ�
        queue.rear = newNode;         // ����βָ��
    }
}

// ���Ӳ���
int dequeue(CirQueue& queue) {
    if (isEmpty(queue)) {
        cout << "����Ϊ�գ��޷�����!" << endl;
        return -1; // ���ش���ֵ
    }

    int value = queue.front->data;

    if (queue.front == queue.rear) {
        // ֻ��һ���ڵ�����
        delete queue.front;
        queue.front = nullptr;
        queue.rear = nullptr;
    }
    else {
        // ����ڵ�����
        LNode* temp = queue.front;
        queue.front = queue.front->next;  // �ƶ�ͷָ��
        queue.rear->next = queue.front;   // ����β�ڵ��nextָ����ͷ
        delete temp;
    }

    return value;
}

int main() {
    CirQueue queue;
    initQueue(queue);

    // ������ӳ���
    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);

    cout << "����: " << dequeue(queue) << endl; // 10
    cout << "����: " << dequeue(queue) << endl; // 20

    enqueue(queue, 40);
    enqueue(queue, 50);

    cout << "����: " << dequeue(queue) << endl; // 30
    cout << "����: " << dequeue(queue) << endl; // 40
    cout << "����: " << dequeue(queue) << endl; // 50

    // ���Կն��г���
    cout << "����: " << dequeue(queue) << endl; // ������ʾ

    return 0;
}
*/