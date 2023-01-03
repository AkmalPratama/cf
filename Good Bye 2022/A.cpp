#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n, m;
	cin >> n >> m;
	ll a[n+m-1];
	for (int i = 0; i < n+m-1; i++) {
		cin >> a[i];
	}
	ll sum;
	cin >> sum;
	sort(a, a+n+m-1, greater<ll>());
	for (int i = 0; i < n-1; i++) {
		sum += a[i];
	}
	cout << sum << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
