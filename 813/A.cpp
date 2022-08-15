#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		int a[n];
		int ans = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			if (i < k && a[i] > k) {
				ans++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}

