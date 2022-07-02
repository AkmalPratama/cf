#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		int n;
		int cost = 0;
		cin >> n;
		vector<int> v;
		for (int i = 0; i < n; i++) {
			int buf;
			cin >> buf;
			if (buf == 0) {
				v.push_back(i+1);
			}
		}
		if (v.empty()) {
			cout << 0 << endl;
		} else {
			cout << v.back() - v.front() + 2 << endl;
		}
	}
	return 0;
}

