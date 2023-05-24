#include <bits/stdc++.h>
using namespace std;

bool isPal(string s) {
	for (int i = 0; i < s.length() / 2; i++) {
		if (s[i] != s[s.length()-1-i]) {
			return false;
		}
	}
	return true;
}

void solve() {
	int n, k;
	cin >> n >> k;
	int mx_pk = n;
	if ((mx_pk % 2) == 0) {
		mx_pk--;
	}
	if ((mx_pk / 2) < k) {
		cout << "-1\n";
		return;
	}
	vector<int> a(n+1, -1);
	int x = n, y = 1;
	for (int i = 1; i <= k; i++) {
		a[i * 2] = x--;
	}
	for (int i = 1; i <= n; i++) {
		if (a[i] == -1) {
			a[i] = y++;
		}
	}
	for (int i = 1; i <= n; i++) {
		cout << a[i] << ' ';
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
