#include <bits/stdc++.h>
using namespace std;

int cntLine(int x[3], int y[3]) {
	int ans = 0;
	if ((y[0] == y[1]) && (y[2] < y[0])) {
		ans = abs(x[0] - x[1]);
	}
	if ((y[2] == y[1]) && (y[2] > y[0])) {
		ans = abs(x[2] - x[1]);
	}
	if ((y[0] == y[2]) && (y[2] > y[1])) {
		ans = abs(x[0] - x[2]);
	}
	return ans;
}



int main () {
	int t;
	cin >> t;
	while (t--) {
		int x[3], y[3];
		for (int i = 0; i < 3; i++) {
			cin >> x[i] >> y[i];
		}
		if ((y[0] == y[1]) || (y[1] == y[2]) || (y[2] == y[0])) {
			int ans = cntLine(x, y);
			cout << ans << endl;
		} else {
			cout << 0 << endl;
		}
	}
	return 0;
}
