#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int cnt = 0;
		if (k > 1) {
			for (int i = 1; i < n - 1; i++) {
				if (a[i] > a[i-1]+a[i+1]) {
					cnt++;
				}
			}
		} else {
			cnt = (n - 1) / 2;
		}
		cout << cnt << endl;
	}
	return 0;
}

