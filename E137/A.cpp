#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
	}
	switch(n) {
		case 8:
			cout << 6 << endl;
			break;
		case 7:
			cout << 6 * 3 << endl;
			break;
		case 6:
			cout << 6 * 6 << endl;
			break;
		case 5:
			cout << 6 * 10 << endl;
			break;
		case 4:
			cout << 6 * 15 << endl;
			break;
		case 3:
			cout << 6 * 21 << endl;
			break;
		case 2:
			cout << 6 * 28 << endl;
			break;
		case 1:
			cout << 6 * 36 << endl;
			break;
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

