#include <iostream>
using namespace std;

int main () {
	int n;
	cin >> n;
	int temp;
	temp = n % 10;
	if (temp <= 5) {
		n -= temp;
	} else {
		n += (10 - temp);
	}
	cout << n << endl;
	return 0;
}
