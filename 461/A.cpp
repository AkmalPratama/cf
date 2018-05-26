#include <iostream>
using namespace std;


int main () {
	int x, y;
	
	cin >> x >> y;
	int buf = x - y;
	if ((buf % 2) == 0) {
		cout << "No" << endl;
	} else {
		if (x > 0 && y == 1) {
			cout << "No" << endl;
		} else {
			if (buf < -1) {
				cout << "No" << endl;
			} else {
				cout << "Yes" << endl;
			}
		}
		
	}
	return 0;
}
