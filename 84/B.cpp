#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main () {
	int n;
	cin >> n;
	int i = 1;
	while (i <= n) {
		if (i % 4 == 1) {
			cout << 'a';
		} else if (i % 4 == 2) {
			cout << 'b';
		} else if (i % 4 == 3) {
			cout << 'c';
		} else {
			cout << 'd';
		}
		i++;
	}
	cout << endl;
	return 0;
}

