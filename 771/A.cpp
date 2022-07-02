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
			b[i] = a[i];
		}
		int l, r;
		for (int i = 0; i < n; i++) {
			cout << i+1 << " " << a[i] << endl;
			if ((i+1) != a[i]) {
				l = i;
				break;
			}
		}
		for (int i = 0; i < n; i++) {
			cout << l+1 << " " << a[i] << endl;
			if ((l+1) == a[i]) {
				r = i;
				break;
			}
		}
		for (int i = 0; i < r - l + 1; i++) {
			b[i+l] = a[r-i];
		}
		cout << b[0];
		for (int i = 1; i < n; i++) {
			cout << " " << b[i];
		}
		cout << endl;
	}
	return 0;
}

/*
2
23
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 23 22 19 21 20
2
1 2

*/
