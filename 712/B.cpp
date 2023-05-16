#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<char> v(n+1), w(n+1);
	string s;
	cin >> s;
	for (int i = 0; i < n; i++) {
		v[i] = s[i];
	}
	v[n] = '0';
	cin >> s;
	for (int i = 0; i < n; i++) {
		w[i] = s[i];
	}
	w[n] = '0';
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (v[i] == '1') {
			cnt++;
		} else {
			cnt--;
		}
		if (cnt != 0) {
			if ((v[i] == w[i]) != (v[i+1] == w[i+1])) {
				cout << "NO\n";
				return;
			}
		}
	}
	cout << "YES\n";
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

