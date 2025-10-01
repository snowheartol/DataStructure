/*
#include<iostream>
using namespace std;

typedef struct SeqSearch {
    int length;
    int* Seq;
} SeqSearch;  // 注意这里需要加结构体名称

int Seq_Search(SeqSearch s, int value) {
    s.Seq[0] = value;  // 这里可能会访问未初始化的内存
    for (int i = s.length; i >= 0; i--)  // 修改循环条件
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
    s.Seq = new int[s.length + 1];  // 分配内存（多分配1个位置用于哨兵）

    // 初始化数组（示例数据）
    for (int i = 0; i <= s.length; i++) {
        s.Seq[i] = i;
    }

    int n = Seq_Search(s, 1);
    cout << n;

    delete[] s.Seq;  // 释放内存
    return 0;
}
*/