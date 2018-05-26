#include <iostream>
#include <string>
using namespace std;

int main () {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int x, y, max = 0;
	x = 0;
	y = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'L') {
			x--;
		} else if (s[i] == 'R') {
			x++;
		} else if (s[i] == 'U') {
			y++;
		} else if (s[i] == 'D') {
			y--;
		}
		if (x == 0 && y == 0) {
			max = i+1;
		}
	}
	cout << max << endl;
	return 0;
}
