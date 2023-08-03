#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int b, c, h;
	cin >> b >> c >> h;
	int ch = c + h;
	if (b > ch) {
		cout << 2 * ch + 1 << endl;
	} else {
		cout << 2 * b - 1 << endl;
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

