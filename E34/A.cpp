#include <iostream>
using namespace std;

int main () {
	int n;
	cin >> n;
	int x[n];
	for (int i = 0; i < n; i++) {
		cin >> x[i];
		if (x[i] <= 11) {
			if (x[i] == 10) {
				cout << "YES" << endl;
			} else {
				if ((x[i] % 3 == 0) || (x[i] % 7 == 0)) {
					cout << "YES" << endl;
				} else {
					cout << "NO" << endl;
				}
			}
		} else {
			cout << "YES" << endl;
		}
	}	
	return 0;
}
