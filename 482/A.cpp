#include <iostream>
#include <cmath>
using namespace std;

int main () {
	int n;
	
	cin >> n;
	if ((n % 2) == 0) {
		cout << n+1 << endl;
	} else {
		int buf = n+1;
		int ctr = 0;
		while ((buf % 2) == 0) {
			buf /= 2;
			ctr++;
		}
		if (buf == 1) {
			cout << ctr << endl;
		} else {
			ctr = pow(2,ctr);
			ctr /= 2;
			cout << (n+1)-ctr << endl;
		}
	}
	return 0;
}
