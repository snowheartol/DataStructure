/*
#include <vector>
#include <iostream>
using namespace std;

bool compare(int n) {
	int t = 1;
	while (n != 0) {
		t = n % 10;
		if (t == 2 || t == 1 || t == 9 || t == 0)
		{
			return true;
		}
		n = n / 10;
	}
	return false;


}


int main() {
	int n = 0;
	int s = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (compare(i)) {
			s += i;
		}
	}
	cout << s;

	return 0;
}
*/