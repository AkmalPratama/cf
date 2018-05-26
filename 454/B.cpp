#include <iostream>
using namespace std;

int getField(int x, int y) {
	int regX, regY;
	if (x <= 3) {
		regX = 1;
	} else if (x <= 6) {
		regX = 2;
	} else {
		regX = 3;
	}
	if (y <= 3) {
		regY = 1;
	} else if (y <= 6) {
		regY = 2;
	} else {
		regY = 3;
	}
}

int getReg(int x) {
	return ((x % 3) == 0) ? 3 : (x % 3);
}

int main () {
	char c[10][10];
	int x, y;
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			cin >> c[i][j];
		}
	}
	cin >> x >> y;
	int regX = getReg(x);
	int regY = getReg(y);
	bool cek = false;
	for (int i = (regX * 3) - 2; i < (regX * 3); i++) {
		for (int j = (regY * 3) - 2; j < (regX * 3); j++) {
			if (c[i][j] == '.') {
				c[i][j] = '!';
				cek = true;
			}
		}
	}
	if (!cek) {
		for (int i = 1; i <= 9; i++) {
			for (int j = 1; j <= 9; j++) {
				if (c[i][j] == '.') {
					c[i][j] = '!';
				}
			}
		}
	}
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			cout << c[i][j];
			if ((j%3) == 0 && (j != 9)) {
				cout << " ";
			}
			if (j == 9) {
				cout << endl;
			}
		}
	}
	return 0;
}
