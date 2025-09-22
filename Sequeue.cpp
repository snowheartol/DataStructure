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

// 初始化循环队列
void initQueue(CirQueue& queue) {
    queue.front = nullptr;
    queue.rear = nullptr;
}

bool isEmpty(CirQueue queue) {
    return queue.front == nullptr;
}

// 入队操作
void enqueue(CirQueue& queue, int value) {
    LNode* newNode = new LNode;
    newNode->data = value;

    if (isEmpty(queue)) {
        // 第一个节点，形成自环
        newNode->next = newNode;
        queue.front = newNode;
        queue.rear = newNode;
    }
    else {
        // 添加到尾部并更新循环
        newNode->next = queue.front;  // 新节点指向头节点形成环
        queue.rear->next = newNode;   // 原尾节点指向新节点
        queue.rear = newNode;         // 更新尾指针
    }
}

// 出队操作
int dequeue(CirQueue& queue) {
    if (isEmpty(queue)) {
        cout << "队列为空，无法出队!" << endl;
        return -1; // 返回错误值
    }

    int value = queue.front->data;

    if (queue.front == queue.rear) {
        // 只有一个节点的情况
        delete queue.front;
        queue.front = nullptr;
        queue.rear = nullptr;
    }
    else {
        // 多个节点的情况
        LNode* temp = queue.front;
        queue.front = queue.front->next;  // 移动头指针
        queue.rear->next = queue.front;   // 更新尾节点的next指向新头
        delete temp;
    }

    return value;
}

int main() {
    CirQueue queue;
    initQueue(queue);

    // 测试入队出队
    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);

    cout << "出队: " << dequeue(queue) << endl; // 10
    cout << "出队: " << dequeue(queue) << endl; // 20

    enqueue(queue, 40);
    enqueue(queue, 50);

    cout << "出队: " << dequeue(queue) << endl; // 30
    cout << "出队: " << dequeue(queue) << endl; // 40
    cout << "出队: " << dequeue(queue) << endl; // 50

    // 测试空队列出队
    cout << "出队: " << dequeue(queue) << endl; // 错误提示

    return 0;
}
*/