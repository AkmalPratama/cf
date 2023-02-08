#include <iostream>
#include <algorithm>
using namespace std;

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int ans = s[n-1] - '0';
	for (int i = 0; i < n-1; i++) {
		if (s[i] - '0' > 0) {
			ans += s[i] - '0' + 1;
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
