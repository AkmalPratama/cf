#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	string s = "";
	for (int i = 0; i < 2*n-2; i++) {
		string x;
		cin >> x;
		if (x.size() == (n/2)) {
			s += x;
		}
	}
	string p = s;
	reverse(p.begin(), p.end());
	if (s == p) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
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

