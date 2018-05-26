#include <iostream>
using namespace std;

int main() {
	int n, max;
	long long s = 0;
	
	cin >> n;
	int a[n];
	cin >> a[0];
	max = a[0];
	for (int i = 1; i < n; i++) {
		cin >> a[i];
		if (max < a[i])
			max = a[i];
	}
	for (int i = 0; i < n; i++) {
		s += (max - a[i]);
	}
	cout << s << endl;
	return 0;
}
