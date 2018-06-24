#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
	int n, buff;
	
	cin >> n;
	vector<int> a;
	for (int i = 0; i < n; i++) {
		cin >> buff;
		a.push_back(buff);
	}
	sort(a.begin(), a.end());
	int ctr = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == a[n-1]) {
			ctr++;
		}
	}
	if ((ctr % 2) == 0) {
		cout << "Agasa" << endl;
	} else {
		cout << "Conan" << endl;
	}
	return 0;
}
