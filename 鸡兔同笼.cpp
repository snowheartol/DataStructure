/*
#include<iostream>
using namespace std;

void CountAnimals(int legs) {
    // ���ٶ������������ܶ������ӣ�4���ȣ�
    int min_animals = legs / 4;  // ��������
    int remaining_legs = legs % 4;

    if (remaining_legs > 0) {
        min_animals++;  // ʣ�µ�����1ֻ��
    }

    // ��ද������ȫ���ü�
    int max_animals = legs / 2;

    cout << min_animals << " " << max_animals << endl;
}

int main() {
    int n, legs;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> legs;

        if (legs % 2 != 0) {
            cout << "0 0" << endl;  // ���������޽�
            continue;
        }

        CountAnimals(legs);
    }

    return 0;
}
*/