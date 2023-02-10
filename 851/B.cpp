#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	if (n == 1) {
		cout << "1 0\n";
		return;
	}
	if (n % 2) {
		string s = to_string(n);
		int a[s.length()], b[s.length()];
		bool swapAB = true;
		for (int i = 0; i < s.length(); i++) {
			if ((s[i] - '0') % 2) {
				if (swapAB) {
					a[i] = (s[i] - '0' + 1) / 2;
					b[i] = (s[i] - '0' - 1) / 2;
					swapAB = !swapAB;
				} else {
					a[i] = (s[i] - '0' - 1) / 2;
					b[i] = (s[i] - '0' + 1) / 2;
					swapAB = !swapAB;
				}
			} else {
				a[i] = (s[i] - '0') / 2;
				b[i] = (s[i] - '0') / 2;
			}
		}
		int zeroStart = true;
		for (int i = 0; i < s.length(); i++) {
			if (a[i] != 0) {
				zeroStart = false;
			}
			if (!zeroStart)
				cout << a[i];
		}
		cout << " ";
		zeroStart = true;
		for (int i = 0; i < s.length(); i++) {
			if (b[i] != 0) {
				zeroStart = false;
			}
			if (!zeroStart)
				cout << b[i];
		}
		cout << endl;
	} else {
		cout << n / 2 << " " << n / 2 << endl;
	}
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

