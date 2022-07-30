#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		bool b = true;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			if (i > 0) {
				if (a[i] % a[0] != 0) {
					b = false;
				}
			}
		}
		
		if (b) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
	return 0;
}

