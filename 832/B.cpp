#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	cout << n / 2 + (n % 2 == 1) << endl;
	int ii = 1;
	int jj = 3 * n;
	while (ii < jj) {
		cout << ii << " " << jj << endl;
		ii += 3;
		jj -= 3;
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

