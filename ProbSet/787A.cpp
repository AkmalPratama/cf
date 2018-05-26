#include <iostream>
using namespace std;

int main() {
	int a, b, c, d;
	
	cin >> a >> b;
	cin >> c >> d;
	int r = b;
	int m = d;/*
	if (b == d) {
		cout << 1 << endl;
	} else {
		if (((a < c) && (b > d))
		|| ((a > c) && (b < d))) {
			while (r != m) {
				if (r < m)
					r += a;
				else
					m += c;
			}
			cout << r << endl;
		} else {
			cout << -1 << endl;
		}		
	}*/
	while (r != m && r < 1000000) {
		if (r < m)
			r += a;
		else
			m += c;
	}
	if (r == m)
		cout << r << endl;
	else
		cout << -1 << endl;
	return 0;
}
