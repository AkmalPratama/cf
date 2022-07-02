#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n], b[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < n; i++) {
			cin >> b[i];
		}
		int maxA, maxB, maxAll, maxOther;
		
		maxA = *max_element(a, a+n);
		maxB = *max_element(b, b+n);
		maxAll = max(maxA, maxB);
		
		if (maxA > maxB) {
			for (int i = 0; i < n; i++) {
				if (a[i] < b[i]) {
					swap(a[i], b[i]);
				}
			}
			maxOther = *max_element(b, b+n);
		} else {
			for (int i = 0; i < n; i++) {
				if (a[i] > b[i]) {
					swap(a[i], b[i]);
				}
			}
			maxOther = *max_element(a, a+n);
		}
		cout << maxAll * maxOther << endl;
	}
	return 0;
}
