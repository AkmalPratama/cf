#include <iostream>
using namespace std;

int main () {
	int n;
	cin >> n;
	int a1 = 0, a2 = 0;
	int temp;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		if (temp == 1) {
			a1++;
		} else {
			a2++;
		}
	}
	if (a1 <= a2) {
		cout << a1 << endl;
	} else {
		cout << a2 + ((a1 - a2) / 3) << endl;
	}
	return 0;
}
