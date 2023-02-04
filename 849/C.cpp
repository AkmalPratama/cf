#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int x = 0;
	for (int i = 0; i < n/2; i++) {
		if (s[i] != s[n-1-i]) {
			x++;
		} else {
			break;
		}
	}
	cout << n - (2 * x) << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

