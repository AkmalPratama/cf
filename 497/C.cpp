#include <bits/stdc++.h>
using namespace std;

int main () {
	int n;
	
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a+n);
	int max = 0;
	for (int i = 1; i < n; i++) {
		int cnt = 0;
		for (int j = 0; j < n; j++) {
			if (a[j] < a[(i+j)%n]) {
				cnt++;
			}																																																																																																																																																																																																																																																																																																																			
		}
		max = cnt > max ? cnt : max;
	}
	cout << max << endl;
	return 0;
}
