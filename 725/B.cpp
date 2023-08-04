#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> v;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		v.push_back(x);
		sum += x;
	}
	int avg = sum / n;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (avg < v[i]) {
			cnt++;
		}
	}
	if (cnt == 0) {
		cout << "0\n";
		return;
	}
	if (avg * n == sum) {
		cout << cnt << endl;
	} else {
		cout << "-1\n";
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

