#include <iostream>
using namespace std;

int main () {
	int n;
	cin >> n;
	int a[200001], temp, sol;
	for (int i = 1; i <= 200000; i++) {
		a[i] = 0;
	}
	for (int i = 1; i <= n; i++) {
		cin >> temp;
		a[temp] = i;
		
	}
	//cout << "----" << endl;
	temp = 200000; 
	for (int i = 1; i <= 200000; i++) {
		if ((temp > a[i]) && (a[i] != 0 )) {
			temp = a[i];
			sol = i;
			
		}
	}
	cout << sol << endl;
	return 0;
}
