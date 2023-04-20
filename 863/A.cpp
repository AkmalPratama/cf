#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n, d;
	string s;
	cin >> n >> d;
	cin >> s;
	bool b = false;
	for (int i = 0; i < n; i++) {
		if (d > s[i] - '0' && !b) {
			cout << d;
			b = true;
		}
		cout << s[i];
	}
	if (!b) {
		cout << d;
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

