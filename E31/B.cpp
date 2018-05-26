#include <iostream>
using namespace std;

int main () {
	int n, x, buf;
	cin >> n >> x;
	int a[n];buf = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		buf += (1+a[i]);
	}
	if ((buf-1) == x) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	return 0;
}
