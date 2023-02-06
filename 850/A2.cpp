#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a, b, c, d;
	a = b = c = d = 0;
	int bound = 1;
	int seg = 1;
	bool isA = true;
	for (int i = 1; i <= n; i++) {
		if (i > bound) {
			isA = !isA;
			bound += seg + 1 + seg + 2;
			seg += 2;
		}
		if (isA) {
			if (i % 2) {
				a++;
			} else {
				b++;
			}
		} else {
			if (i % 2) {
				c++;
			} else {
				d++;
			}
		}
	}
	cout << a << " " << b << " " << c << " " << d << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

