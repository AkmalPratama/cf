#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct {
	int x;
	int y;
}point;

bool isAdj(point a, point b) {
	return (
		(a.x == b.x && a.y == (b.y + 1)) ||
		(a.x == b.x && a.y == (b.y - 1)) ||
		(a.y == b.y && a.x == (b.x + 1)) ||
		(a.y == b.y && a.x == (b.x - 1))
	);
}

int main () {
	int r, c;
	cin >> r >> c;
	char m[r][c];
	vector<point> s;
	vector<point> w;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> m[i][j];
			if (m[i][j] == 'S') {
				point p;
				p.x = i;
				p.y = j;
				s.push_back(p);
			} else if (m[i][j] == 'W') {
				point p;
				p.x = i;
				p.y = j;
				w.push_back(p);
			}
		}
	}
	for (int i = 0; i < w.size(); i++) {
		for (int j = 0; j < s.size(); j++) {
			if (isAdj(w[i], s[j])) {
				cout << "No" << endl;
				return 0;
			}
		}
	}
	cout << "Yes" << endl;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (m[i][j] == '.') {
				m[i][j] = 'D';
			}
			cout << m[i][j];
		}
		cout << endl;
	}
	return 0;
}

