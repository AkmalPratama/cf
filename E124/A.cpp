#include <algorithm>
#include <iostream>
using namespace std;

int square(int x) {
	int n = 1;
	for (int i = 0; i < x; i++) {
		n *= 2;
	}
	return n;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		cout << square(n) - 1 << endl;
	}
	return 0;
}
