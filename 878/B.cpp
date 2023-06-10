#include <bits/stdc++.h>
#define ll long long
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
	int n, k;
	cin >> n >> k;
	k = min(k, 30);
	cout << min(n + 1, (int)pow(2, k)) << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

