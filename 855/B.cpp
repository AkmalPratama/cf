#include <bits/stdc++.h>
#define ll long long
using namespace std;

int f(int a, int b) {
	return (a + b - 1) / b;
}

void solve() {
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	int u[26] = {}, l[26] = {};
	for (int i = 0; i < n; i++) {
		if (isupper(s[i])) {
			u[ s[i] - 'A']++;
		} else {
			l[ s[i] - 'a']++;
		}
	}
	int ans = 0;
	for (int i = 0; i < 26; i++) {
		int ul = abs(u[i] - l[i]);
		ans += min(u[i], l[i]);
		if (ul > 1) {
			if (ul < 2 * k) {
				ans += ul / 2;
				k -= ul / 2;
			} else {
				ans += k;
				k = 0;
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

