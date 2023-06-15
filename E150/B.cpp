#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	int x;
	cin >> x;
	cout << 1;
	bool b = true;
	int fi = x, la = INT_MAX, ptr = x;
	for (int i = 1; i < n; i++) {
		cin >> x;
		if (fi <= x && x <= la) {
			cout << 1;
			fi = x;
		} else {
			if (b && x <= ptr) {
				cout << 1;
				b = false;
				fi = x;
				la = ptr;
			} else {
				cout << 0;
			}
		}
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

