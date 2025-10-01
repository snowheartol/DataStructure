/*
#include<iostream>
using namespace std;

void CountAnimals(int legs) {
    // 最少动物数：尽可能多用兔子（4条腿）
    int min_animals = legs / 4;  // 兔子数量
    int remaining_legs = legs % 4;

    if (remaining_legs > 0) {
        min_animals++;  // 剩下的腿用1只鸡
    }

    // 最多动物数：全部用鸡
    int max_animals = legs / 2;

    cout << min_animals << " " << max_animals << endl;
}

int main() {
    int n, legs;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> legs;

        if (legs % 2 != 0) {
            cout << "0 0" << endl;  // 奇数腿数无解
            continue;
        }

        CountAnimals(legs);
    }

    return 0;
}
*/