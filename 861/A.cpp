#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n, m, ans = 0;
	cin >> n >> m;
	if ((m - n) >= 100) {
		ans = n / 100;
		ans = ans * 100 + 90;
		if (n <= ans) {
			cout << ans << endl;
		} else {
			cout << ans + 100 << endl;
		}
	} else {
		int luck = 0;
		ans = n;
		for (int i = n; i <= m; i++) {
			string s = to_string(i);
			sort(s.begin(), s.end());
			if (luck < s[s.length()-1] - s[0]) {
				ans = i;
				luck = s[s.length()-1] - s[0];
			}
		}
		cout << ans << endl;
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

