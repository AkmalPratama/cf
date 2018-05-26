#include <iostream>
#include <cmath>
using namespace std;

int main () {
	int n, k[10];
	
	cin >> n;
	
	k[9] = 32640;
	k[8] = 8128;
	k[7] = 2016;
	k[6] = 496;
	k[5] = 120;
	k[4] = 28;
	k[3] = 6;
	k[2] = 1;
	k[1] = 0;

	for (int i = 9; i >= 1; i--) {
		if ((n % k[i]) == 0) {
			cout << k[i] << endl;
			break;
		}
	}
	return 0;
}
