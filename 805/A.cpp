#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int buf = n;
		int cnt = 0;
		while (buf >= 10 && buf % 10 == 0) {
			buf /= 10;
		}
		if (buf == 1) {
			cout << 0 << endl;
		} else {
			buf = n;
			while (buf >= 10) {
				buf /= 10;
				cnt++;
			}
			if (n < 10) {
				cout << n - 1 << endl;
			} else {
				cout << n - int(pow(10, cnt)) << endl;
			}
		}
	}
	return 0;
}

