#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n;
	cin >> n;
	
	if ((n < 4) || (n % 2 == 1)) {
		cout << -1 << endl;
		return;
	}
	
	if (n < 6) {
		cout << "1 1" << endl;
		return;
	}
	ll min, max;
	if (n % 6 == 0) {
		min = n / 6;
	} else {
		min = (n / 6) + 1;
	}
	max = n / 4;
	cout << min << " " << max << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

