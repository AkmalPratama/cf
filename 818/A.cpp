#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	
	cin >> n;
	int sum = 0;
	sum += n;
	sum += 2 * (n / 2);
	sum += 2 * (n / 3);
	cout << sum << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

