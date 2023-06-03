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
	int mi = INT_MAX;
	int imi = -1;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] < mi) {
			mi = a[i];
			imi = i;
		}
	}
	cout << n-1 << endl;
	for (int i = 0; i < n; i++) {
		if (i == imi) {
			continue;
		}
		cout << i+1 << ' ' << imi+1 << ' ' << abs(i - imi) + mi << ' ' << mi << endl;
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

