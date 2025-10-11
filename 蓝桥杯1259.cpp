/*

#include <vector>
#include <iostream>
using namespace std;

int main() {
	int s = 1000000;
	vector<int> v;
	while (s > 0) {
		v.push_back(s % 7);
		s = s / 7;
	}
	for (int i = 0; i < v.size(); i++) {
		if (v[i] > 5) {
			v[i] -= 7;
			if (i + 1 < v.size()) {
				v[i + 1] += 1;
			}
			else {
				v.push_back(1);
			}
		}
	}
	int sum = 0;
	for (int i : v) {
		sum += i;
	}
	cout << sum;
	return 0;
}

*/