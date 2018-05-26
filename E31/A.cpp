#include <iostream>
using namespace std;

const int day = 86400;

int main() {
	int n, t;
	
	cin >> n >> t;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		t = t - (day - a[i]);
		if (t <= 0) {
			cout << (i+1) << endl;
			break;
		}
	}
	
}
