#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	set<int> s;
	int ans = 0;
	for (int i = 0; i < n-1; i++) {
		if (v[i] > v[i+1]) {
			s.insert(v[i]);
			ans = s.size();
		} else {
			if (v[i] < v[i+1]) {
				if (s.count(v[i+1]) != 0) {
					s.insert(v[i]);
					ans = s.size();
				} else {
					s.insert(v[i]);
				}
			} else {
				s.insert(v[i]);
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

