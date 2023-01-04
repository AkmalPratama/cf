#include <iostream>
#include <string>
using namespace std;

void solve() {
	int n;
	cin >> n;
	if (n == 3) {
		cout << "NO\n";
		return;
	}
	cout << "YES\n";
	if (n % 2 == 0) {
		for (int i = 0; i < n/2; i++) {
			cout << "1 -1 ";
		}
		cout << endl;
	} else {
		for (int i = 0; i < n/2; i++) {
			cout << n / 2 - 1 << " " << -(n / 2) << " ";
		}
		cout << n / 2 - 1 << endl;
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

