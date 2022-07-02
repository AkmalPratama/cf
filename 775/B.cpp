#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		long long a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a, a+n);
		long long sum = 0, ans = 0;
		for (int i = 0; i < n-1; i++) {
			sum += a[i];
		}
		if ((a[n-1] - sum) > 0) {
			cout << a[n-1] - sum << endl;
		} else {
			if (a[n-1] == 0) {
				cout << 0 << endl;
			} else {
				cout << 1 << endl;
			}
		}
	}
	return 0;
}
