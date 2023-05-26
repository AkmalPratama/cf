#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int ans = -1;
	int cur = 1;
	for (int i = 1; i < n; i++) {
		if (s[i] == s[i-1]) {
			cur++;
		} else {
			cur = 1;
		}
		ans = max(ans, cur);
	}
	cout << max(2, ans + 1) << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

