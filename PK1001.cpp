/*
#include<iostream>

using namespace std;

double pow_n(double v,int n) {
	//处理指数为0的情况
	if (n==0)
	{
		return 1;
	}
	//处理底数为0的情况
	if (v==0)
	{
		if (n > 0) {
			return 0;
		}
		else
		{
			return 0;
			//返回无穷大
		}
	}
	//处理负指数
	bool negative = false;
	if (n<0)
	{
		negative = true;
		n = -n;
	}
	//使用快速幂算法
	double result = 1.0;
	double base = v;
	while (n > 0) {
		if (n&1)//如果指数为奇数
		{
			result *= base;
		}
		base *= base;//底数平方
		n >>= 1;//指数减半
	}
	return negative ? 1.0 / result : result;
}

int main() {
	int v, n;
	while (cin >> v >> n) {
		double s = pow_n(v, n);
		cout << s << endl; // 添加换行符
	}
	return 0;
}

*/