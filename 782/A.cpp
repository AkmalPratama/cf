
#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		int n, r, b;
		cin >> n >> r >> b;
		int seg = r / (b + 1);
		int ove = r % (b + 1);
		for (int ii = 0; ii < b+1; ii++) {
			for (int i = 0; i < seg; i++) {
				cout << "R";
			}
			if (ii < ove) {
				cout << "R";
			}
			if (ii != b)
				cout << "B";
		}
		cout << endl;
	}
	return 0;
}

