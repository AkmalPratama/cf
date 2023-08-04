#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<pair<int,int>> v;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		v.push_back(make_pair(x, i));
	}
	sort(v.begin(), v.end());
	int l = min(v[0].second, v[n-1].second);
	int r = max(v[0].second, v[n-1].second);
	cout << min(
	r + 1,
	min(
	n - l,
	l + 1 + n - r
	)
	) << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

