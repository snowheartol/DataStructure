/*
#include<iostream>
using namespace std;

typedef struct SeqSearch {
    int length;
    int* Seq;
} SeqSearch;  // ע��������Ҫ�ӽṹ������

int Seq_Search(SeqSearch s, int value) {
    s.Seq[0] = value;  // ������ܻ����δ��ʼ�����ڴ�
    for (int i = s.length; i >= 0; i--)  // �޸�ѭ������
    {
        if (s.Seq[i] == value) {
            return i;
        }
    }
    return 0;
}

int main() {
    SeqSearch s;
    s.length = 10;
    s.Seq = new int[s.length + 1];  // �����ڴ棨�����1��λ�������ڱ���

    // ��ʼ�����飨ʾ�����ݣ�
    for (int i = 0; i <= s.length; i++) {
        s.Seq[i] = i;
    }

    int n = Seq_Search(s, 1);
    cout << n;

    delete[] s.Seq;  // �ͷ��ڴ�
    return 0;
}
*/