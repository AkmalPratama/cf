#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	string s;
	cin >> s;
	int ans = s.length();
	int buf = 0;
	int cnt = 0;
	int i;
	for (i = s.length()-1; i >= 0; i--) {
		if (s[i] == '0') {
			cnt++;
		} else {
			buf++;
		}
		if (cnt == 2) {
			break;
		}
	}
	ans = min(ans, buf);
	buf = 0;
	for (i = s.length()-1; i >= 0; i--) {
		if (s[i] == '5') {
			break;
		} else {
			buf++;
		}
	}
	for (i = i-1; i >= 0; i--) {
		if (s[i] == '2') {
			break;
		} else {
			buf++;
		}
	}
	ans = min(ans, buf);
	buf = 0;
	for (i = s.length()-1; i >= 0; i--) {
		if (s[i] == '5') {
			break;
		} else {
			buf++;
		}
	}
	for (i = i-1; i >= 0; i--) {
		if (s[i] == '7') {
			break;
		} else {
			buf++;
		}
	}
	ans = min(ans, buf);
	buf = 0;
	for (i = s.length()-1; i >= 0; i--) {
		if (s[i] == '0') {
			break;
		} else {
			buf++;
		}
	}
	for (i = i-1; i >= 0; i--) {
		if (s[i] == '5') {
			break;
		} else {
			buf++;
		}
	}
	ans = min(ans, buf);
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
