#include <iostream>
#include <algorithm>
using namespace std;

void solve() {
	int n, z;
	cin >> n >> z;
	int a[n];
	int ans = 0;
	for (int &x: a) {
		cin >> x;
		ans = max(ans, x|z);
	}
	cout << ans << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
