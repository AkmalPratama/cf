#include <iostream>
#include <string>
using namespace std;

int main () {
	int r, c,
	s_x, s_y,
	e_x, e_y;
	string s;
	
	cin >> r >> c;
	char m[r+1][c+1];
	for (int i = 1; i <= r; i++) {
		for (int j = 1; j <= c; j++) {
			cin >> m[i][j];
			if (m[i][j] == 'S') {
				s_x = i;
				s_y = j;
			}
			if (m[i][j] == 'E') {
				e_x = i;
				e_y = j;
			}
		}
	}
	cin >> s;
	return 0;
}
