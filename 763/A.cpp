#include <iostream>
#include <algorithm>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		int n, m, rb, cb, rd, cd;
		
		cin >> n >> m >> rb >> cb >> rd >> cd;
		if (rb == rd || cb == cd) {
			cout << 0 << endl;
		} else {
			bool isLeft = cd < cb;
			bool isUp = rd < rb;
			int horTime = 0;
			int verTime = 0;
			
			if (!isLeft) {
				horTime = cd - cb;
			} else {
				horTime = m - cb + m - cd;
			}
			if (!isUp) {
				verTime = rd - rb;
			} else {
				verTime = n - rb + n - rd;
			}
			cout << min(horTime, verTime) << endl;
		}
	}
	return 0;
}
