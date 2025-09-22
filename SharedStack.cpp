/*

#define Maxsize 10
#include<iostream>
using namespace std;

typedef struct SharedStack {
    int data[Maxsize];
    int top1;  // ջ1��ջ��ָ��
    int top2;  // ջ2��ջ��ָ��
};

void InitSharedStack(SharedStack& stack) {
    stack.top1 = -1;       // ջ1��ʼΪ��
    stack.top2 = Maxsize;  // ջ2��ʼΪ��
}

bool isEmpty(SharedStack& stack, int stackNum) {
    if (stackNum == 1)
        return stack.top1 == -1;
    else
        return stack.top2 == Maxsize;
}

bool isFull(SharedStack& stack) {
    return stack.top1 + 1 == stack.top2;
}

// ��ջ1���Ԫ��
void PushStack1(SharedStack& stack, int value) {
    if (isFull(stack)) {
        cout << "ջ�����޷����Ԫ��!" << endl;
        return;
    }
    stack.data[++stack.top1] = value;
}

// ��ջ1ɾ��Ԫ��
int PopStack1(SharedStack& stack) {
    if (isEmpty(stack, 1)) {
        cout << "ջ1Ϊ�գ��޷�ɾ��Ԫ��!" << endl;
        return -1; // ���ش���ֵ
    }
    return stack.data[stack.top1--];
}

// ��ջ2���Ԫ��
void PushStack2(SharedStack& stack, int value) {
    if (isFull(stack)) {
        cout << "ջ�����޷����Ԫ��!" << endl;
        return;
    }
    stack.data[--stack.top2] = value;
}

// ��ջ2ɾ��Ԫ��
int PopStack2(SharedStack& stack) {
    if (isEmpty(stack, 2)) {
        cout << "ջ2Ϊ�գ��޷�ɾ��Ԫ��!" << endl;
        return -1; // ���ش���ֵ
    }
    return stack.data[stack.top2++];
}

int main() {
    SharedStack stack;
    InitSharedStack(stack);

    // ����ջ1
    PushStack1(stack, 10);
    PushStack1(stack, 20);
    cout << "ջ1����: " << PopStack1(stack) << endl; // 20
    cout << "ջ1����: " << PopStack1(stack) << endl; // 10

    // ����ջ2
    PushStack2(stack, 30);
    PushStack2(stack, 40);
    cout << "ջ2����: " << PopStack2(stack) << endl; // 40
    cout << "ջ2����: " << PopStack2(stack) << endl; // 30

    return 0;
}
*/