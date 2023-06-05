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
	int n;
	cin >> n;
	int a[n];
	for (int &x: a) {
		cin >> x;
	}
	sort(a, a+n);
	if (a[0] < 0) {
		cout << a[0] << endl;
	} else {
		cout << a[n-1] << endl;
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

