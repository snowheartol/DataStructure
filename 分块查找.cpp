
/*
#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;


//�����ṹ��
struct Block
{
	int max_val;//�������ֵ
	int start_idx;//�����ʼ����
	int end_idx;//��Ľ�������
};


//�ֿ���Һ���

int blockSearch(vector<int>& arr, int target) {
	int n = arr.size();
	if (n==0)
	{
		return -1;
	}

	//ȷ������
	int block_size = sqrt(n);
	int block_num = (n + block_size - 1) / block_size;

	//����������
	vector<Block> index_table(block_num);
	for (int i = 0; i < block_num; i++)
	{
		int start = i * block_size;
		int end = min((i + 1) * block_size - 1, n - 1);//��ֹ���һ����Խ��

		//���ҵ�ǰ������ֵ
		int max_val = arr[start];
		for (int j = start+1; j <= end; j++)
		{
			if (arr[j] > max_val) {
				max_val = arr[j];
			}
		}
		//�������Ϣ����������
		index_table[i] = { max_val,start,end };
	}

	//���������ж�λĿ����ܴ��ڵĿ�
	int target_block = -1;//��ʼ��Ϊ-1��ʾδ�ҵ�
	for (int i = 0; i < block_num; i++)
	{
		if (target <= index_table[i].max_val) {
			target_block = i;
			break;
		}
	}
	//��Ŀ�����˳�����
	if (target_block != -1) {
		int start = index_table[target_block].start_idx;
		int end = index_table[target_block].end_idx;
		//����Ŀ����е�����Ԫ��
		for (int i = start; i <=end; i++)
		{
			if (arr[i] == target) {
				return i;//�ҵ�Ŀ��
			}
		}
	}
	return -1;//δ�ҵ�

}

int main() {
	// ʾ�����ݣ�����������ǰ�����ֵ < �����Сֵ��
	vector<int> arr = { 3, 1, 5,    // ��1 (max=5)
					   9, 8, 7,    // ��2 (max=9)
					   15, 12, 13 };// ��3 (max=15)
	int target = 8;

	int result = blockSearch(arr, target);
	if (result != -1) {
		cout << "Ԫ�� " << target << " ������λ�� " << result << endl;
	}
	else {
		cout << "Ԫ�� " << target << " δ�ҵ�" << endl;
	}
	return 0;
}

*/