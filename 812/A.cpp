#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> x, y;
		for (int i = 0; i < n; i++) {
			int buf;
			cin >> buf;
			x.push_back(buf);
			cin >> buf;
			y.push_back(buf);
		}
		int xP, xN, yP, yN;
		xP = xN = yP = yN = 0;
		xP = *max_element(x.begin(), x.end());
		xN = *min_element(x.begin(), x.end());
		yP = *max_element(y.begin(), y.end());
		yN = *min_element(y.begin(), y.end());
		vector<int> side;
		side.push_back(xP);
		side.push_back(xN);
		side.push_back(yP);
		side.push_back(yN);
		int maxSide = *max_element(side.begin(), side.end());
		int sum;
		
		if (xN > 0) {
			xN = 0;
		}
		if (xP < 0) {
			xP = 0;
		}
		if (yN > 0) {
			yN = 0;
		}
		if (yP < 0) {
			yP = 0;
		}
		sum = 2 * (xP + abs(xN) + yP + abs(yN));
		cout << sum << endl;
	}
	return 0;
}

