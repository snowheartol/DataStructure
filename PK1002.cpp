/*
#include <iostream>
#include <map>
#include <cctype>
#include <string>
using namespace std;

// ����ĸת��Ϊ��Ӧ������
char convertChar(char c) {
    if (isdigit(c)) return c;

    // ��Сд��ĸת��Ϊ��д
    if (islower(c)) {
        c = toupper(c);
    }

    // ������ĸӳ�����ת��
    if (c >= 'A' && c <= 'C') return '2';
    if (c >= 'D' && c <= 'F') return '3';
    if (c >= 'G' && c <= 'I') return '4';
    if (c >= 'J' && c <= 'L') return '5';
    if (c >= 'M' && c <= 'O') return '6';
    if (c >= 'P' && c <= 'S') return '7';
    if (c >= 'T' && c <= 'V') return '8';
    if (c >= 'W' && c <= 'Y') return '9';

    return c; // ����ִ�е������Ϊ�˱���ͨ��
}

int main() {
    int n;
    cin >> n;
    cin.ignore(); // ���Ի��з�

    map<string, int> phoneCount; // �洢�绰����ͳ��ִ���

    for (int i = 0; i < n; i++) {
        string s;
        getline(cin, s); // ��ȡһ������

        string numStr = "";
        // ����ÿ���ַ�������'-'��ת����ĸΪ����
        for (char c : s) {
            if (c == '-') continue;
            numStr += convertChar(c);
        }

        // ��ʽ��Ϊ��׼�绰���� (xxx-xxxx)
        string standard = numStr.substr(0, 3) + "-" + numStr.substr(3);
        phoneCount[standard]++;
    }

    bool hasDuplicates = false;
    // ����map������ظ��ĵ绰����
    for (const auto& entry : phoneCount) {
        if (entry.second >= 2) {
            hasDuplicates = true;
            cout << entry.first << " " << entry.second << endl;
        }
    }

    // ���û���ظ��ĵ绰����
    if (!hasDuplicates) {
        cout << "No duplicates." << endl;
    }

    return 0;
}
*/