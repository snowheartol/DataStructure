//汉诺塔问题
#include<iostream>
using namespace std;

void move(int n, char A, char B);
//将前n个盘子，通过B,从A,转到C

void hanno(int n,char A,char B,char C) {
	if (n==1)
	{
		move(1, A, B);

	}
	else
	{
		hanno(n - 1, A, C, B);
		move(n, A, C);
		hanno(n - 1, B, A, C);
	}
}

void move(int n,char A,char B) {
	cout << "move A to B" << endl;
}