/*

#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int>& arr) {
	int n = arr.size();
	for (int i = 1; i < n; i++)//从第二个元素开始插入
	{
		int key = arr[i];
		int j = i - 1;

		//
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j--;

		}
		arr[j + 1] = key;
	}
}

int main() {
	std::vector<int> arr = { 12, 11, 13, 5, 6 };
	insertionSort(arr);

	std::cout << "Sorted array: ";
	for (int num : arr) {
		std::cout << num << " ";
	}
	return 0;
}

*/