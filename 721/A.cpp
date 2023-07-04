#include <bits/stdc++.h>
using namespace std;

void solve() {
	double n;
	cin >> n;
	double k = log2(n);
	
	cout << (int) pow(2, floor(k)) - 1 << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

