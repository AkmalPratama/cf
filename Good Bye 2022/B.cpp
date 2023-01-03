#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n, k;
	cin >> n >> k;
	int a[n+1];
	for (int i = 1; i <= n/2; i++) {
		a[2*i] = i;
	}
	for (int i = 1; i <= n/2; i++) {
		a[2*i-1] = n + 1 - i;
	}
	if (n % 2 == 1) {
		a[n] = n / 2 + 1;
	}
	for (int i = 1; i <= n; i++) {
		cout << a[i] << " ";
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
