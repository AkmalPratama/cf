#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	string s;
	cin >> n;
	cin >> s;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		vector<int> v(10, 0);
		int distinct = 0;
		int max_freq = 0;
		for (int j = i; j < n && v[s[j] - '0'] < 10; j++) {
			v[s[j] - '0']++;
			if (v[s[j] - '0'] == 1) {
				distinct++;
			}
			max_freq = max(max_freq, v[s[j] - '0']);
			if (max_freq <= distinct) {
				ans++;
			}
		}
	}
	cout << ans << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

