
/*
#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;


//索引结构体
struct Block
{
	int max_val;//块内最大值
	int start_idx;//块的起始索引
	int end_idx;//块的结束索引
};


//分块查找函数

int blockSearch(vector<int>& arr, int target) {
	int n = arr.size();
	if (n==0)
	{
		return -1;
	}

	//确定块数
	int block_size = sqrt(n);
	int block_num = (n + block_size - 1) / block_size;

	//创建索引表
	vector<Block> index_table(block_num);
	for (int i = 0; i < block_num; i++)
	{
		int start = i * block_size;
		int end = min((i + 1) * block_size - 1, n - 1);//防止最后一个块越界

		//查找当前块的最大值
		int max_val = arr[start];
		for (int j = start+1; j <= end; j++)
		{
			if (arr[j] > max_val) {
				max_val = arr[j];
			}
		}
		//将块的信息存入索引表
		index_table[i] = { max_val,start,end };
	}

	//在索引表中定位目标可能存在的块
	int target_block = -1;//初始化为-1表示未找到
	for (int i = 0; i < block_num; i++)
	{
		if (target <= index_table[i].max_val) {
			target_block = i;
			break;
		}
	}
	//在目标块中顺序查找
	if (target_block != -1) {
		int start = index_table[target_block].start_idx;
		int end = index_table[target_block].end_idx;
		//遍历目标块中的所有元素
		for (int i = start; i <=end; i++)
		{
			if (arr[i] == target) {
				return i;//找到目标
			}
		}
	}
	return -1;//未找到

}

int main() {
	// 示例数据（满足块间有序：前块最大值 < 后块最小值）
	vector<int> arr = { 3, 1, 5,    // 块1 (max=5)
					   9, 8, 7,    // 块2 (max=9)
					   15, 12, 13 };// 块3 (max=15)
	int target = 8;

	int result = blockSearch(arr, target);
	if (result != -1) {
		cout << "元素 " << target << " 在索引位置 " << result << endl;
	}
	else {
		cout << "元素 " << target << " 未找到" << endl;
	}
	return 0;
}

*/