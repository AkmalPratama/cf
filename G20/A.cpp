#include <iostream>
#include <algorithm>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		bool e = false;
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			if (x != 1) {
				if (x%2 == 0) {
					e = !e;
				}
			}
		}
		if (e) {
			cout << "errorgorn" << endl;
		} else {
			cout << "maomao90" << endl;
		}
	}
	return 0;
}
