#include <iostream>
#include <cmath>
using namespace std;

long long d(int x, int y) {
	if (abs(x - y) > 1) {
		return y - x;
	} else {
		return 0;
	}
}

int main () {
	int n;
	long long sum;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sum = 0;
	for (int i = 0; i < (n-1); i++) {
		for (int j = i; j < n; j++) {
			sum += d(a[i], a[j]);
		}
	}
	cout << sum << endl;
	return 0;
}
