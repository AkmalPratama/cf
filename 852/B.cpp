#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int a, b;
	cin >> a >> b;
	cout << 2 * (a - b) << endl;
	for (int i = a; i >= b; i--) {
		cout << i << " ";
	}
	for (int i = b+1; i <= a-1; i++) {
		cout << i << " ";
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

