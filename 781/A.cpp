
#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		if (n >= 7) {
			if (n%2 == 0) {
				cout << "2 " << n-6 << " 2 2" << endl;
			} else {
				cout << "2 " << n-5 << " 2 1" << endl;
			}
		} else if (n == 4) {
			cout << "1 1 1 1" << endl;
		} else if (n == 5) {
			cout << "2 1 1 1" << endl;
		} else if (n == 6) {
			cout << "3 1 1 1" << endl;
		}
	}
	return 0;
}

