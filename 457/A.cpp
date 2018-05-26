#include <iostream>
using namespace std;

bool isContain7(int n) {
	int buf = n;
	// h : m1 m2
	int h, m1, m2;
	
	m2 = (buf % 10);
	
	while (buf > 60) {
		buf -= 60;
	}
	m1 = (buf / 10) % 10;
	
	buf = n;
	h = (buf / 60) % 10;
	if ((m2 == 7) || (m1 == 7) || (h == 7)) {
		return true;
	} else {
		return false;
	}
}

int main () {
	int x;
	int h, m;
	int total;
	
	cin >> x;
	cin >> h >> m;
	total = (h * 60) + m;
	int ctr = 0;
	while (!isContain7(total)) {
		total -= x;
		if (total < 0) {
			total += (24 * 60);
		}
		ctr++;
	}
	cout << ctr << endl;
	return 0;
}
