#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;
	vector<pair<int, int>> v;
	int h[n];
	for (int i = 0; i < n; i++) {
		cin >> h[i];
	}
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		pair<int, int> p;
		p = make_pair(x, h[i]);
		v.push_back(p);
	}
	sort(v.begin(), v.end());
	int cnt = 0;
	int dmg = 0;
	while(k > 0 && cnt < n) {
		if (v[cnt].second > k + dmg) {
			dmg += k;
			k -= v[cnt].first;
		} else {
			cnt++;
		}
	}
	if (cnt != n) {
		cout << "NO\n";
	} else {
		cout << "YES\n";
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
