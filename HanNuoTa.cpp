//��ŵ������
#include<iostream>
using namespace std;

void move(int n, char A, char B);
//��ǰn�����ӣ�ͨ��B,��A,ת��C

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