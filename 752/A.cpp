#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n];
	int l = 0;
	for (int &x: a) {
		cin >> x;
		l++;
		if (l < x) {
			l = x;
		}
	}
	cout << l - n << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
