#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	string s, ans;
	cin >> s;
	ans = s[0];
	if (n == 1 || s[0] == s[1]) {
		cout << s[0] << s[0] << endl;
		return;
	}
	for (int i = 0; i < s.length()-1; i++) {
		if (s[i] >= s[i+1]) {
			ans += s[i+1];
		} else {
			break;
		}
	}
	cout << ans;
	for (int i = ans.length()-1; i >= 0; i--) {
		cout << ans[i];
	}
	cout << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
