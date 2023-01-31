#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	ll sum = 1;
	for (int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		sum *= x;
	}
	sum = sum + n - 1;
	sum *= 2022;
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

