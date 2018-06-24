#include <bits/stdc++.h>
using namespace std;

int main () {
	int n, k;
	
	cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a+n);
	int idx = k - 1;
	if (k == 0) {
		if (a[0] >= 2) {
			cout << a[0] - 1 << endl;
		} else {
			cout << -1 << endl;
		}
	} else {
		if (n == k) {
			cout << a[idx] << endl;
		} else {
			if (a[idx] == a[idx+1]) {
				cout << -1 << endl;
			} else {
				cout << a[idx] << endl;
			}
		}
	}
	return 0;
}
