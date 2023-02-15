#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool solve() {
	string s;
	cin >> s;
	int b = 0;
	int notb = 0;
	for (char c: s) {
		if (c == 'B') {
			b++;
		} else {
			notb++;
		}
	}
	return b == notb;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		if (solve()) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
	return 0;
}
