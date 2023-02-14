#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(vector<ll> &v) {
	int n;
	cin >> n;
	cout << v[n] << endl;
}

int main () {
	int t;
	cin >> t;
	vector<ll> v(100001);
	v[1] = 1;
	for (ll i = 2; i <= 100000; i++) {
		v[i] = ((i << 1) - 1ll) * v[i-1] % 1000000007 * (i << 1) % 1000000007;
	}
	while (t--) {
		solve(v);
	}
	return 0;
}
