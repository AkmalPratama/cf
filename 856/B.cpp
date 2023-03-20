#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n];
	for (int &x: a) {
		cin >> x;
		if (x == 1) {
			x = 2;
		}
	}
	for (int i = 0; i < n-1; i++) {
		if (a[i+1] % a[i] == 0) {
			a[i+1]++;
		}
	}
	for (int x: a) {
		cout << x << " ";
	}
	cout << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

