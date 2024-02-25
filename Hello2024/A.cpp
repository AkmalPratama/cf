#include <iostream>
#include <string>
using namespace std;

void solve() {
	int a, b;
	cin >> a >> b;
	if (abs(a - b) % 2) {
		cout << "Alice\n";
	} else {
		cout << "Bob\n";
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

