#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		int max = -1, idx = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			if (a[i] > max) {
				max = a[i];
				idx = i;
			}
		}
		cout << idx + 1 << endl;
	}
	return 0;
}

