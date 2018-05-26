#include <iostream>
using namespace std;

int main () {
	int n;
	int sumP, sumN;
	
	sumP = 0;
	sumN = 0;
	cin >> n;
	int x[n], y[n];
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
		if (x[i] > 0) {
			sumP++;
		} else {
			sumN++;
		}
	}
	if ((sumP < 2) || sumN < 2) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	return 0;
}
