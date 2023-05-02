#include <iostream>
#include <algorithm>
using namespace std;

void solve() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << i + 3 << " ";
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
