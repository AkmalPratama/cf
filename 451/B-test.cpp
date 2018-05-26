#include <iostream>
using namespace std;

int gcd (int a, int b, int & x, int & y) {
    if (a == 0) {
        x = 0; y = 1;
        return b;
    }
    int x1, y1;
    int d = gcd (b%a, a, x1, y1);
    x = y1 - (b / a) * x1;
    y = x1;
    return d;
}

bool find_any_solution (int a, int b, int c, int & x0, int & y0, int & g) {
    g = gcd (abs(a), abs(b), x0, y0);
    if (c % g != 0) {
    	return false;
	}
    x0 *= c / g;
    y0 *= c / g;
    if (a < 0)   x0 *= -1;
    if (b < 0)   y0 *= -1;
    return true;
}

int main () {
	int n, a, b, x0, y0, g;
	cin >> n >> a >> b;
	if (find_any_solution(a, b, n, x0, y0, g)) {
		cout << "YES" << endl;
		cout << x0 << " " << y0 << endl;
	} else {
		cout << "NO" << endl;
	}
	return 0;
}
