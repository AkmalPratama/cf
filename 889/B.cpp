#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool foo(const pair<int,int> &a, const pair<int,int> &b) {
	return a.second > b.second;
}

void solve() {
	ll n;
	cin >> n;
	int ans = 0, cnt = 0;
	for (ll i = 1; i <= ceil(sqrtl(n)); i++) {
		if (n % i == 0) {
			cnt++;
			ans = max(ans, cnt);
		} else {
			break;
		}
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

