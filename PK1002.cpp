/*
#include <iostream>
#include <map>
#include <cctype>
#include <string>
using namespace std;

// 将字母转换为对应的数字
char convertChar(char c) {
    if (isdigit(c)) return c;

    // 将小写字母转换为大写
    if (islower(c)) {
        c = toupper(c);
    }

    // 根据字母映射规则转换
    if (c >= 'A' && c <= 'C') return '2';
    if (c >= 'D' && c <= 'F') return '3';
    if (c >= 'G' && c <= 'I') return '4';
    if (c >= 'J' && c <= 'L') return '5';
    if (c >= 'M' && c <= 'O') return '6';
    if (c >= 'P' && c <= 'S') return '7';
    if (c >= 'T' && c <= 'V') return '8';
    if (c >= 'W' && c <= 'Y') return '9';

    return c; // 不会执行到这里，但为了编译通过
}

int main() {
    int n;
    cin >> n;
    cin.ignore(); // 忽略换行符

    map<string, int> phoneCount; // 存储电话号码和出现次数

    for (int i = 0; i < n; i++) {
        string s;
        getline(cin, s); // 读取一行输入

        string numStr = "";
        // 处理每个字符，跳过'-'，转换字母为数字
        for (char c : s) {
            if (c == '-') continue;
            numStr += convertChar(c);
        }

        // 格式化为标准电话号码 (xxx-xxxx)
        string standard = numStr.substr(0, 3) + "-" + numStr.substr(3);
        phoneCount[standard]++;
    }

    bool hasDuplicates = false;
    // 遍历map，输出重复的电话号码
    for (const auto& entry : phoneCount) {
        if (entry.second >= 2) {
            hasDuplicates = true;
            cout << entry.first << " " << entry.second << endl;
        }
    }

    // 如果没有重复的电话号码
    if (!hasDuplicates) {
        cout << "No duplicates." << endl;
    }

    return 0;
}
*/