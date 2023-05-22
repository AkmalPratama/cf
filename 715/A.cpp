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
	int n;
	cin >> n;
	deque<int> d;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (x % 2) {
			d.push_front(x);
		} else {
			d.push_back(x);
		}
	}
	for (int i = 0; i < n; i++) {
		cout << d[i] << ' ';
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
