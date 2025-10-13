/*
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, m;
	map<int, int> mp;
	cin >> n >> m;
	for (int i = 0; i < n * m; i++) {
		int a;
		cin >> a;
		mp[a]++;//map底层会创建一个键 并初始化值为0 
	}
	for (const auto& i : mp) {
		if (i.second > n * m / 2.0) {

			cout << i.first;
			break;
		}
	}


	return 0;
}
*/