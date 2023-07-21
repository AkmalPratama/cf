#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;
	int a[n];
	for (int &x: a) {
		cin >> x;
	}
	sort(a, a+n);
	vector<int> v;
	int cnt = 1;
	for (int i = 1; i < n; i++) {
		if (abs(a[i] - a[i-1]) <= k) {
			cnt++;
		} else {
			v.push_back(cnt);
			cnt = 1;
		}
	}
	v.push_back(cnt);
	sort(v.begin(), v.end());
	cout << n - v.back() << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
