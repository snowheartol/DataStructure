/*

#include <vector>
#include <iostream>
#include <algorithm>
//prev_permutation()��next_permutation������ʹ��
using namespace std;
int main() {
	vector<int> v = { 1,2,3,4 };
	for (int num : v) {
		cout << num;
	}
	cout << endl;

	//��������
	while (next_permutation(v.begin(), v.end())) {
		for (int num : v) {
			cout << num;
		}
		cout << endl;
	}
	cout << endl;
	//����false���ָ����������
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