/*

#include<iostream>
using namespace std;

int arr[100];
//默认数据为顺序排列即1到n中选r个数构成的组合
void comb(int n,int r) {
	
	//当需要选择的数选择完时，打印组合
	if (r==0)
	{
		for (int i = 1; i <= arr[0]; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
		return;
	}
	//从n开始向下选择
	for (int i = n; i >=r; i--)
	{
		arr[r] = i;
		comb(i - 1, r - 1);
	}
}
int main() {
	int n, r;
	cout << "请输入总数n: ";
	cin >> n;
	cout << "请输入选择数r: ";
	cin >> r;

	arr[0] = r; // 使用arr[0]存储组合的长度
	cout << "所有组合为：" << endl;
	comb(n, r);

	return 0;
}

*/