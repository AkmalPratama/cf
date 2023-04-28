#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int a[101]) {
	int n, k;
	cin >> n >> k;
	int i;
	for (i = 0; i <= n/2; i++) {
		if (k == (a[i] + a[n-i])) {
			cout << "YES\n";
			for (int j = 1; j <= n; j++) {
				if (j <= i) {
					cout << "1 ";
				} else {
					cout << "-1 ";
				}
			}
			cout << endl;
			return;
		}
	}
	cout << "NO\n";
}

int main () {
	int t;
	cin >> t;
	int a[101];
	a[0] = 0;
	a[1] = 0;
	for (int i = 2; i <= 100; i++) {
		a[i] = a[i - 1] + i - 1;
	}
	while (t--) {
		solve(a);
	}
	return 0;
}

