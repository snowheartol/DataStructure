/*

#include<vector>
#include<iostream>
using namespace std;

//冒泡排序函数
void bubbleSort(vector<int>& arr) {
	int n = arr.size();
	for (int i = 0; i < n-1; i++)
	{
		//设置标志位用于优化，如果本轮没有交换，说明已有序
		bool swapped = false;

		// 内层循环：比较相邻元素（每轮减少一个比较元素）
	   // 注意：n-1-i 是因为每轮后最后i个元素已有序


		for (int j = 0; j < n-1-i; j++)
		{
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				swapped = true;
			}
		}
		// 如果本轮没有发生交换，说明数组已有序，提前结束
		if (!swapped)
		{
			break;
		}
	}

}

int main() {
	vector<int> arr = { 64, 34, 25, 12, 22, 11, 90 };

	cout << "排序前: ";
	for (int num : arr) {
		cout << num << " ";
	}
	cout << endl;

	bubbleSort(arr);

	cout << "排序后: ";
	for (int num : arr) {
		cout << num << " ";
	}
	cout << endl;

	return 0;
}

*/