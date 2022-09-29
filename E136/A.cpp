#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		if (n == 1 || m == 1) {
			cout << 1 << " " << 1 << endl;
		} else {
			if (n == 2 && m < 4) {
				cout << "1 2"  << endl;
			} else {
				if (m == 2 && n < 4) {
					cout << "2 1"  << endl;
				} else {
					cout << "2 2" << endl;
				}
			}
		}
	}
	return 0;
}

