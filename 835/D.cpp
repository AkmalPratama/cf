#include <bits/stdc++.h>
using namespace std;

int solve() {
	int n;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (i == 0 || x != v.back()) {
			v.push_back(x);
		}
	}
	int cnt = 0;
	for (int i = 0; i < v.size(); i++) {
		if ((i == 0 || v[i-1] > v[i]) && (v[i] < v[i+1] || i == v.size() - 1)) {
			cnt++;
		}
	}
	if (cnt == 1) {
		cout << "Yes\n";
	} else {
		cout << "No\n";
	}
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

