/*

#include<iostream>
using namespace std;

int arr[100];
//Ĭ������Ϊ˳�����м�1��n��ѡr�������ɵ����
void comb(int n,int r) {
	
	//����Ҫѡ�����ѡ����ʱ����ӡ���
	if (r==0)
	{
		for (int i = 1; i <= arr[0]; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
		return;
	}
	//��n��ʼ����ѡ��
	for (int i = n; i >=r; i--)
	{
		arr[r] = i;
		comb(i - 1, r - 1);
	}
}
int main() {
	int n, r;
	cout << "����������n: ";
	cin >> n;
	cout << "������ѡ����r: ";
	cin >> r;

	arr[0] = r; // ʹ��arr[0]�洢��ϵĳ���
	cout << "�������Ϊ��" << endl;
	comb(n, r);

	return 0;
}

*/