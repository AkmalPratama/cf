#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n], b[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	
	for (int i = 1; i < n; i++) {
		if (a[i] < b[i-1]) {
			a[i] = b[i-1];
		}
	}
	
	for (int i = 0; i < n; i++) {
		cout << b[i] - a[i] << " ";
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

