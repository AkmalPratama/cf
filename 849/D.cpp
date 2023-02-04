#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	set<char> a;
	set<char> b;
	size_t fa[n];
	size_t fb[n];
	for (int i = 0; i < n; i++) {
		if (a.count(s[i]) == 0) {
			a.insert(s[i]);
		}
		fa[i] = a.size();
	}
	for (int i = n-1; i >= 0; i--) {
		if (b.count(s[i]) == 0) {
			b.insert(s[i]);
		}
		fb[i] = b.size();
	}
	size_t ans = 0;
	for (int i = 0; i < n-1; i++) {
		ans = max(ans, fa[i] + fb[i+1]);
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

