#include <iostream>
#include <algorithm>
using namespace std;

int main () {
	int n, temp;
	
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a+n);
	for (int i = (n-1); i >= 0; i--) {
		float f = (float)a[i];
		f = sqrt(f);
		if ((f - floor(f)) != 0) {
			temp = i;
			break;
		}
	}
	cout << a[temp] << endl;
	return 0;
}
