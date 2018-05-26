#include <iostream>
using namespace std;

int main () {
//	int n, m, start = -99, end, neff = 0, bufa, bufb;
//	cin >> n >> m;
//	int a[n], b[n];
//	bool cek = true;
//
//	cin >> a[neff] >> b[neff];
//	
//	for (int i = 1; i < n; i++) {
//		cin >> bufa >> bufb;
//		if (bufa <= b[neff] && b[neff] < bufb) {
//			b[neff] = bufb;
//		} else {
//			neff++;
//			a[neff] = bufa;
//			b[neff] = bufb;
//		}
//	}
//	
//	for (int i = 0; i <= neff; i++) {
//		if (a[i] == 0) {
//			start = a[i];
//			end = b[i];
//		}
//	}
//	
//	if (start == 0) {
//		if (m <= end) {
//			cout << "YES" << endl;
//		} else {
//			cout << "NO" << endl;
//		}
//	} else {
//		cout << "NO" << endl;
//	}
	int n, m;
	
	cin >> n >> m;
	bool a[m];
	for (int i = 0; i < m; i++) {
		a[i] = false;
	}
	int tel, lim;
	for (int i = 0; i < n; i++) {
		cin >> tel >> lim;
		for (int j = (tel - lim); j <= (tel + lim); j++) {
			a[j] = true;
		}
	}
	int it = 0;
	while (it < m && a[it]) {
		it++;
	}
	if (it != m) {
		cout << "NO" << endl;
	} else {
		cout << "YES" << endl;
	}
	for (int i = 0; i < m; i++) {
		cout << a[i] << endl;
	}
	return 0;
}
