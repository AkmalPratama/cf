#include <bits/stdc++.h>
using namespace std;

int main () {
	int n, k;
	int minim = 0;
	cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if ((k % a[i]) == 0) {
			if (a[i] > minim) {
				minim = a[i];
			}
		}
	}
	cout << k / minim << endl;
	return 0;
}
