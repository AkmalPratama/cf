#include <bits/stdc++.h>

using namespace std;

int main () {
	long long n, k;
	cin >> n >> k;
	if (k > ((2*n)- 1)) {
		cout << 0 << endl;
	} else {
		if (k <= (n+1)) {
			if (k%2 == 0) {
				cout << (k/2) - 1 << endl;
			} else {
				cout << k/2 << endl;
			}
		} else {
			if (k%2 == 0) {
				cout << (k/2) - (k-n) << endl;
			} else {
				cout << ((k+1)/2) - (k-n) << endl;
			}
		}
	}
	return 0;
}

