#include <iostream>
#include <vector>
using namespace std;

int main () {
	int n, pay = 0;
	int x, y;
	string s;
	bool mark; // 1 for k1 | 0 for k2
	bool pos;
	cin >> n;
	cin >> s;
	
	x = y = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'R') {
			x++;
		} else {
			y++;
		}
		if (i == 0) {
			pos = mark = (s[i] == 'R');
		} else {
			if (x > y) {
				pos = true;
			} else if (x < y) {
				pos = false;
			}
			if (pos != mark) {
				mark = pos;
				pay++;
			}
		}
	}
	cout << pay << endl;
	return 0;
}
