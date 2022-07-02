#include <bits/stdc++.h>
using namespace std;

int main () {
	int n;
	
	cin >> n;
	int a[n], cnt = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < (n-1); i++) {
		for (int j = (i+1); j < n; j++) {
			int buf = a[i] + a[j];
			if (ceil(log2(buf)) == floor(log2(buf))) {
				break;
			}
			if (j == (n-1) && ceil(log2(buf)) != floor(log2(buf))) {
				cnt++;
			}
		}
	}
	cout << cnt << endl;
	return 0;
}
