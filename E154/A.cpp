#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	string s;
	cin >> s;
	int i1, i3;
	for (int i = 0; i < 9; i++) {
		if (s[i] == '1' || s[i] == '3') {
			cout << s[i];
		}
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

