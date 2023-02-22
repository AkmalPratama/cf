#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;
	int a[k];
	for (int &x: a) {
		cin >> x;
	}
	sort(a, a+k);
	int ans = 0, sec = 0;
	for (int i = k-1; i >= 0; i--) {
		sec += n - a[i];
		if (n > sec) {
			ans++;
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
