/*
#include<iostream>
using namespace std;

#define Maxsize 10
//使用数组定义栈
typedef struct Stack {
	int data[Maxsize];
	int top;
};


void InitStack(Stack& stack) {
	
	stack.top = -1;
}
bool isEmpty(Stack& stack) {
	if (stack.top==-1)
	{
		return true;
	}
	else {
		return false;
	}
}
//进栈
bool push(Stack& stack,int value) {
	if (stack.top==Maxsize-1)
	{
		return false;
	}
	else {
		stack.data[++stack.top] = value;
		return true;
	}
}
//出栈
int pop(Stack& stack) {
	if (isEmpty(stack))
	{
		return 0;
	}
	else {
		return stack.data[stack.top--];
	}
}
int main() {
	Stack stack;
	InitStack(stack);
	push(stack, 1);
	cout<<pop(stack)<<endl;
}
*/

