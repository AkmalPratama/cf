#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	string s;
	string t;
	cin >> s;
	cin >> t;
	int idx = n-1;
	string ans = "";
	for (int i = 1; i < n; i++) {
		if (s[i] > t[i-1]) {
			idx = i - 1;
			break;
		}
	}
	for (int i = 0; i <= idx; i++) {
		cout << s[i];
	}
	ans = s.substr(0, idx + 1);
	for (int i = idx; i < n; i++) {
		cout << t[i];
	}
	cout << endl;
	ans += t.substr(idx, n - idx);
	int x = 1;
	for (int i = idx; i >= 1; i--) {
		if (s[i] == t[i-1]) {
			x++;
		} else {
			break;
		}
	}
	cout << x << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

