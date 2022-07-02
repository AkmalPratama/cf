#include <bits/stdc++.h>

using namespace std;

int main () {
	long long n, m, k, l;
	cin >> n >> m >> k >> l;
	
	if (m > n) {
		cout << -1 << endl;
	} else {
		long long coinNeeded = l / m;
		if (coinNeeded == 0) {
			cout << 1 << endl;
		} else {
			if (l%m == 0) {
				cout << coinNeeded << endl;
			} else {
				coinNeeded++;
				if (coinNeeded*m > n) {
					cout << -1 << endl;
				} else {
					cout << coinNeeded << endl;
				}
			}
		}
	}
	
	
	return 0;
}
