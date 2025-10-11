/*

#include <vector>
#include <iostream>
#include <algorithm>
//prev_permutation()和next_permutation函数的使用
using namespace std;
int main() {
	vector<int> v = { 1,2,3,4 };
	for (int num : v) {
		cout << num;
	}
	cout << endl;

	//生成排序
	while (next_permutation(v.begin(), v.end())) {
		for (int num : v) {
			cout << num;
		}
		cout << endl;
	}
	cout << endl;
	//返回false后会恢复成最初排列
	for (int num : v) {
		cout << num;
	}
	cout << endl;
	//---------------------------------------------------------------



	vector<int> v2 = { 4,3,2,1 };
	for (int num : v2) {
		cout << num;
	}
	cout << endl;
	while (prev_permutation(v2.begin(), v2.end())) {
		for (int num : v2) {
			cout << num;
		}
		cout << endl;
	}
	cout << endl;
	for (int num : v2) {
		cout << num;
	}


	return 0;
}
*/