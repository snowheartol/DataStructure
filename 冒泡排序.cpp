/*

#include<vector>
#include<iostream>
using namespace std;

//ð��������
void bubbleSort(vector<int>& arr) {
	int n = arr.size();
	for (int i = 0; i < n-1; i++)
	{
		//���ñ�־λ�����Ż����������û�н�����˵��������
		bool swapped = false;

		// �ڲ�ѭ�����Ƚ�����Ԫ�أ�ÿ�ּ���һ���Ƚ�Ԫ�أ�
	   // ע�⣺n-1-i ����Ϊÿ�ֺ����i��Ԫ��������


		for (int j = 0; j < n-1-i; j++)
		{
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				swapped = true;
			}
		}
		// �������û�з���������˵��������������ǰ����
		if (!swapped)
		{
			break;
		}
	}

}

int main() {
	vector<int> arr = { 64, 34, 25, 12, 22, 11, 90 };

	cout << "����ǰ: ";
	for (int num : arr) {
		cout << num << " ";
	}
	cout << endl;

	bubbleSort(arr);

	cout << "�����: ";
	for (int num : arr) {
		cout << num << " ";
	}
	cout << endl;

	return 0;
}

*/