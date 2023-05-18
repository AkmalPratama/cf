#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll u, v;
	cin >> u >> v;
	cout << - (u * u) << ' ' << v * v << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
