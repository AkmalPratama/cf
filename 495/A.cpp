#include <bits/stdc++.h>

using namespace std;

int main () {
	int n, d;
	
	cin >> n >> d;
	int a[n];
	int buf = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < (n-1); i++) {
		if ((a[i+1] - a[i]) < (2 * d)) {
			buf += 2;
		} else if ((a[i+1] - a[i]) == (2 * d)) {
			buf++;
		}
	}
	cout << ((2 * n) - buf) << endl;
	return 0;
}
