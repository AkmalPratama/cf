#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a == b) {
		cout << c << endl;
	} else if (b == c) {
		cout << a << endl;
	} else {
		cout << b << endl;
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

