#include <bits/stdc++.h>
using namespace std;

int main () {
	int n;
	int even, odd;
	cin >> n;
	int p[(n/2)+1];
	even = odd = 0;
	for (int i = 1; i <= (n/2); i++) {
		cin >> p[i];
		if (p[i] % 2 == 0) {
			even++;
		} else {
			odd++;
		}
	}
	return 0;
}
