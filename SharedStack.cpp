/*

#define Maxsize 10
#include<iostream>
using namespace std;

typedef struct SharedStack {
    int data[Maxsize];
    int top1;  // 栈1的栈顶指针
    int top2;  // 栈2的栈顶指针
};

void InitSharedStack(SharedStack& stack) {
    stack.top1 = -1;       // 栈1初始为空
    stack.top2 = Maxsize;  // 栈2初始为空
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

// 向栈1添加元素
void PushStack1(SharedStack& stack, int value) {
    if (isFull(stack)) {
        cout << "栈满，无法添加元素!" << endl;
        return;
    }
    stack.data[++stack.top1] = value;
}

// 从栈1删除元素
int PopStack1(SharedStack& stack) {
    if (isEmpty(stack, 1)) {
        cout << "栈1为空，无法删除元素!" << endl;
        return -1; // 返回错误值
    }
    return stack.data[stack.top1--];
}

// 向栈2添加元素
void PushStack2(SharedStack& stack, int value) {
    if (isFull(stack)) {
        cout << "栈满，无法添加元素!" << endl;
        return;
    }
    stack.data[--stack.top2] = value;
}

// 从栈2删除元素
int PopStack2(SharedStack& stack) {
    if (isEmpty(stack, 2)) {
        cout << "栈2为空，无法删除元素!" << endl;
        return -1; // 返回错误值
    }
    return stack.data[stack.top2++];
}

int main() {
    SharedStack stack;
    InitSharedStack(stack);

    // 测试栈1
    PushStack1(stack, 10);
    PushStack1(stack, 20);
    cout << "栈1弹出: " << PopStack1(stack) << endl; // 20
    cout << "栈1弹出: " << PopStack1(stack) << endl; // 10

    // 测试栈2
    PushStack2(stack, 30);
    PushStack2(stack, 40);
    cout << "栈2弹出: " << PopStack2(stack) << endl; // 40
    cout << "栈2弹出: " << PopStack2(stack) << endl; // 30

    return 0;
}
*/