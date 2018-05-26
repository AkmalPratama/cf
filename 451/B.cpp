#include <iostream>
using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main () {
	int n, a, b;
	cin >> n >> a >> b;
	int buf = gcd(a, b);
	if (n < a && n < b) {
		cout << "NO" << endl;
	} else {
		if (n % buf != 0) {
			cout << "NO" << endl;
		} else {
			a /= buf;
			b /= buf;
			n /= buf;
			int i = 0, A = a;
			int j = 1, B = b;
			bool stop = false;
			while (A <= n && !stop) {
				A = a * i;
				if ((n - A) % b == 0) {
					stop = true;
				}
				i++;
			}
			i--;
			if ((a * i) > n || i < 0)
				cout << "NO" << endl;
			else {
				cout << "YES" << endl;
				cout << i << " " << (n - (a * i)) / b << endl;
			}
		}
	}
	return 0;
}
