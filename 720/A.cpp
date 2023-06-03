#include <bits/stdc++.h>
#define ll long long
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
	ll a, b;
	cin >> a >> b;
	if (b == 1) {
		cout << "NO\n";
		return;
	}
	cout << "YES\n";
	cout << a << ' ' << a * b << ' ' << (b + 1) * a << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
