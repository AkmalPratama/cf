#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, h, m;
	cin >> n >> h >> m;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		v.push_back(x * 60 + y);
	}
	sort(v.begin(), v.end());
	int sleep = h * 60 + m;
	int ans = 0;
	if (v.back() < sleep) {
		ans = v[0] - sleep + (24 * 60);
		cout << ans / 60 << " " << ans % 60 << endl;
		return;
	} else {
		for (int i = 0; i < n; i++) {
			if (sleep <= v[i]) {
				if (v[i] - sleep >= 0) {
					ans = v[i] - sleep;
					cout << ans / 60 << " " << ans % 60 << endl;
					return;
				}
			}
		}
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

