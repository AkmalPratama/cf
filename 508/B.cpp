#include <bits/stdc++.h>

using namespace std;

int main () {
	int n;
	cin >> n;
//	2
//	1 3 4 5 6 7 8 9 10 11 12
//	76
//	4,7,8,11,12,15,16,19,20,23,24,27,28,31,32,35,36,39,40
//	====
//	5
//	5,10,15,20
//	3
//	1 2 4 5 6 7 8 9
//	6,9,12
//	42
	if (n < 3) {
		cout << "No" << endl;
	} else {
		cout << "Yes" << endl;
		cout << "1 " << n << endl;
		cout << n-1;
		for (int i = 1; i < n; i++) {
			cout << " " << i;
		}
	}
	return 0;
}

