/*
#include<iostream>

using namespace std;

double pow_n(double v,int n) {
	//����ָ��Ϊ0�����
	if (n==0)
	{
		return 1;
	}
	//�������Ϊ0�����
	if (v==0)
	{
		if (n > 0) {
			return 0;
		}
		else
		{
			return 0;
			//���������
		}
	}
	//����ָ��
	bool negative = false;
	if (n<0)
	{
		negative = true;
		n = -n;
	}
	//ʹ�ÿ������㷨
	double result = 1.0;
	double base = v;
	while (n > 0) {
		if (n&1)//���ָ��Ϊ����
		{
			result *= base;
		}
		base *= base;//����ƽ��
		n >>= 1;//ָ������
	}
	return negative ? 1.0 / result : result;
}

int main() {
	int v, n;
	while (cin >> v >> n) {
		double s = pow_n(v, n);
		cout << s << endl; // ��ӻ��з�
	}
	return 0;
}

*/