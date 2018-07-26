#include <bits/stdc++.h>
using namespace std;

int main () {
	int n, t;
	int arr[26], arr2[26];
	string s;
	
	cin >> n >> t;
	cin >> s;
	for (int i = 0; i < 26; i++) {
		arr[i] = arr2[i] = 0;
	}
	for (int i = 0; i < n; i++) {
		arr[ s[i] - 97  ]++;
	}
	for (int i = 0; i < 26; i++) {
		arr2[i] = arr[i];
	}
	for (int i = 0; i < 26; i++) {
		if (arr[i] >= t) {
			arr[i] -= t;
			break;
		} else {
			t -= arr[i];
			arr[i] = 0;
		}
	}
	for (int i = 0; i < 26; i++) {
		arr2[i] -= arr[i];
	}
	for (int i = 0; i < n; i++) {
		if (arr2[ s[i] - 97] > 0) {
			arr2[ s[i] - 97]--;
		} else {
			cout << s[i];
		}
	}
	cout << endl;
	return 0;
}
