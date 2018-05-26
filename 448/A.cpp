#include <iostream>
using namespace std;



int main() {
	int n, temp, sum1, sum2;
	temp = 360;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int h = 0; h < n; h++) {
		for (int i = h; i < (h+n); i++) {
			sum1 = 0;
			sum2 = 0;
			for (int j = h; j < i; j++) {
				sum1 += a[j%n];
			}
			for (int j = i; j < (h+n); j++) {
				sum2 += a[j%n];
			}
			if (temp > abs(sum1 - sum2)) {
				temp = abs(sum1 - sum2);
			}
			
		}
	}
	cout << temp << endl;
	/*
	for (int i = 0; i < (2*n); i++) {
		cout << a[i % n] << endl;
	}
	*/
	return 0;
} 
