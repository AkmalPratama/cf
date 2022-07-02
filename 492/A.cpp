#include <bits/stdc++.h>

using namespace std;

int main () {
	int n;
	
	cin >> n;
	int bill = 0;
	int c = 100;
	if (n >= c) {
		bill += n / c;
		n %= c;
	}
	c = 20;
	if (n >= c) {
		bill += n / c;
		n %= c;
	}
	c = 10;
	if (n >= c) {
		bill += n / c;
		n %= c;
	}
	c = 5;
	if (n >= c) {
		bill += n / c;
		n %= c;
	}
	c = 1;
	if (n >= c) {
		bill += n / c;
		n %= c;
	}
	cout << bill << endl;
	return 0;
}
