#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		int cnt0 = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			if (a[i] == 0) {
				cnt0++;
			}
		}
		if (cnt0 > 0) {
			cout << n - cnt0 << endl;
		} else {
			sort(a, a+n);
			bool b = false;
			for (int i = 0; i < n-1; i++) {
				if (a[i] == a[i+1]) {
					b = true;
					break;
				}
			}
			if (b) {
				cout << n << endl;
			} else {
				cout << n+1 << endl;
			}
		}
	}
	return 0;
}

