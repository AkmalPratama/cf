#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		int x; cin >> x;
		int a[3];
		cin >> a[0] >> a[1] >> a[2];
		if (a[x-1] == 0) {
			cout << "NO\n";
		} else {
			if (a[a[x-1]-1] == 0) {
				cout << "NO\n";
			} else {
				cout << "YES\n";
			}
		}
	}
	return 0;
}

