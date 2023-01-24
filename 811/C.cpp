#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, i = 9;
	cin >> n;
	string s = "";
	while (n > 0) {
		if (i >= n) {
			s = to_string(n) + s;
		} else {
			s = to_string(i) + s;
		}
		n -= i;
		i--;
	}
	cout << s << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

