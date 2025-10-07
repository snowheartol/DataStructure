/*
#include<iostream>
#include<vector>
using namespace std;

//���ֲ��Һ���
int binarySearch(const vector<int>& arr, int targe) {
	int left = 0;
	int right = arr.size() - 1;

	while (left <= right) {
		int mid = left + (right - left) / 2;

		if (arr[mid]==targe)
		{
			return mid;
		}
		else if (arr[mid]<targe) {
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}

	return -1;//û���ҵ�Ŀ��
}

int main() {
	vector<int> arr = { 1, 3, 5, 7, 9, 11, 13, 15 };
	int target = 7;

	int result = binarySearch(arr, target);

	if (result != -1) {
		cout << "Ԫ�� " << target << " �������е�����Ϊ: " << result << endl;
	}
	else {
		cout << "Ԫ�� " << target << " δ���������ҵ�" << endl;
	}

	return 0;
}

*/