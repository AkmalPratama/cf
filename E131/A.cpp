#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		int sum = 0;
		for (int i = 0; i < 4; i++) {
			int x;
			cin >> x;
			sum += x; 
		}
		if (sum == 0) {
			cout << 0 << endl;
		} else if (sum == 4) {
			cout << 2 << endl;
		} else {
			cout << 1 << endl;
		}
	}
	return 0;
}

