#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n];
	int cnt2 = 0;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] == 2) {
			cnt2++;
			v.push_back(i+1);
		}
	}
	if (cnt2 % 2) {
		cout << -1 << endl;
		return;
	}
	if (cnt2 == 0) {
		cout << 1 << endl;
		return;
	}
	cout << v[cnt2 / 2 - 1] << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

