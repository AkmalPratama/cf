#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	int ans = 1;
	for (int i = 1; i <= 33; i++) {
		if (ans > n) {
			ans /= 2;
			break;
		}
		ans *= 2;
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

