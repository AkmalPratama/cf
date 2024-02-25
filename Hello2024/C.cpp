#include <iostream>
#include <string>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int x;
	int t1 = INT_MAX;
	int t2 = INT_MAX;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (t1 > t2) {
			swap(t1, t2);
		}
		if (x <= t1) {
			t1 = x;
		} else if (x <= t2) {
			t2 = x;
		} else {
			t1 = x;
			ans++;
		}
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

