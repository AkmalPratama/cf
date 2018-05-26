#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
	string s;
	bool b = false;
	bool stop = false;
	cin >> s;
	int i = 0;
	int A, B, C;
	A = B = C = 0;
	while (i < (s.length() - 1) && !stop) {
		if (s[i] > s[i+1]) {
			stop = true;
		}
		if (s[i] == 'a') {
			A++;
		} else if (s[i] == 'b') {
			B++;
		} else {
			C++;
		}
		i++;
	}
	if (s[i] == 'a') {
		A++;
	} else if (s[i] == 'b') {
		B++;
	} else {
		C++;
	}
	if (A == 0 || B == 0 || C == 0) {
		b == false;
	} else {
		if (C == A || C == B) {
			if (!stop) {
				b = true;
			}
		}
	}
	if (b) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	return 0;
}
