#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n;
	cin >> n;
	ll sum = 0;
	while (n > 0) {
		sum += n;
		n /= 2;
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

