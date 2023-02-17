#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n, h;
	cin >> n >> h;
	int a[n];
	for (int &x: a) {
		cin >> x;
	}
	sort(a, a+n);
	int ma1 = a[n-1];
	int ma2 = a[n-2];
	int ans = 0;
	ans += 2 * (h / (ma1 + ma2));
	h = h % (ma1 + ma2);
	if (h > 0) {
		if (h <= ma1) {
			ans++;
		} else {
			ans += 2;
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
