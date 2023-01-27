#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	string pi = "314159265358979323846264338327";
	string s;
	cin >> s;
	int ans = 0;
	int i = 0;
	while (s[i] == pi[i] && i < s.length()) {
		ans++;
		i++;
	}
	cout << ans << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

