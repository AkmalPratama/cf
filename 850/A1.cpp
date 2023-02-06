#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a = 1, b = 0;
	n--;
	if (n == 1) {
		cout << "1 1\n";
		return;
	}
	for (int i = 2; i <= n; i++) {
		if ((i / 2) % 2 == 0) {
			a += i;
			n -= i;
			if (i+1 > n) {
				if (i % 2 == 0) {
					a += n;
					n = 0;
				} else {
					b += n;
					n = 0;
				}
			}
		} else {
			b += i;
			n -= i;
			if (i+1 > n) {
				if (i % 2 == 0) {
					b += n;
					n = 0;
				} else {
					a += n;
					n = 0;
				}
			}
		}
	}
	cout << a << " " << b << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

