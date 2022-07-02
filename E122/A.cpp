#include <algorithm>
#include <iostream>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		if (n % 7 == 0) {
			cout << n << endl;
		} else {
			int rem = n % 7;
			int lastDig = n % 10;
			if (lastDig + 7 - rem > 9) {
				cout << n - rem << endl;
			} else {
				cout << n + 7 - rem << endl;
			}
		}
	}
	return 0;
}
