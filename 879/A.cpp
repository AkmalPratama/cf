#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n], cnt1 = 0, cntMin1 = 0, ans = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] == 1) {
			cnt1++;
		} else {
			cntMin1++;
		}
	}
	if (cnt1 < cntMin1) {
		ans += (n / 2) - cnt1;
		cnt1 += (n / 2) - cnt1;
		cntMin1 = n - cnt1;
	}
	if (cnt1 < cntMin1) {
		ans += 1;
		cnt1++;
		cntMin1--;
	}
	if (cntMin1 % 2) {
		ans++;
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

