#include <iostream>
using namespace std;

int main () {
	double r, x, y, xf, yf;
	
	cin >> r >> x >> y >> xf >> yf;
	if ((r * r) > ((abs(xf - x) * abs(xf - x)) + (abs(yf - y) * abs(yf - y)))) {
		
	} else {
		cout << x << y << r;
	}
	
	return 0;
}
