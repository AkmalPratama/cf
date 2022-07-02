#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		int a, b;
		cin >> a >> b;
		if (a < b) {
			if(abs(a-b) < a) {
				for (int i = 0; i < (b-a); i++) {
					cout << "1";
				}
				for (int i = 0; i < a; i++) {
					cout << "01";
				}
				cout << endl;
			} else {
				for (int i = 0; i < a+b; i++) {
					if (i < a) {
						cout << "0";
					} else {
						cout << "1";
					}
				}
				cout << endl;
			}
		} else if (a == b) {
			for (int i = 0; i < a; i++) {
				cout << "10";
			}
			cout << endl;
		} else {
			if(abs(a-b) < b) {
				for (int i = 0; i < (a-b); i++) {
					cout << "0";
				}
				for (int i = 0; i < b; i++) {
					cout << "10";
				}
				cout << endl;
			} else {
				for (int i = 0; i < a+b; i++) {
					if (i < b) {
						cout << "1";
					} else {
						cout << "0";
					}
				}
				cout << endl;
			}
		}
	}
	return 0;
}

