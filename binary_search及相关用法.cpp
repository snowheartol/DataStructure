//���ֲ���binary_search
/*
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int target = 5;
	vector<int> v = { 1,2,3,4,5 };//��֤����

	bool result = binary_search(v.begin(), v.end(), target);
	if (result) {
		cout << "find";

	}
	else {
		cout << "not find";
	}
	cout << endl;
	//------------------------------------------
	//lower_bound��upper_bound
	//�������ǽ���
	vector<int> v2 = { 5,2,2,1,1,4,7 };
	sort(v2.begin(), v2.end());
	for (int i : v2) {
		cout << i << " ";
	}
	cout << endl;

	//lower_bound��������ҿ����ĵ�һ������
	//����Ŀ��Ԫ�صĵ�ַ
	//upper_bound��������ҿ����ĵ�һ������Ŀ��Ԫ�صĵ�ַ
	cout << (lower_bound(v2.begin(), v2.end(), 1) - v2.begin()) << endl;
	cout << (upper_bound(v2.begin(), v2.end(), 1) - v2.begin()) << endl;

	return 0;
}
*/