#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	string s;
	cin >> s;
	int x = 0;
	for (int i = 0; i < 3; i++) {
		x += s[i];
	}
	if (x != 198) {
		if (x == 194) {
			cout << 'C' << endl;
		} else if(x == 195) {
			cout << 'B' << endl;
		} else {
			cout << 'A' << endl;
		}
	}
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
		solve();
		solve();
	}
	return 0;
}

