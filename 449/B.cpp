#include <iostream>
using namespace std;

bool isZcy(int x) {
	int n, num, digit, rev = 0;

    n = x;

    do
    {
        digit = x % 10;
        rev = (rev * 10) + digit;
        x = x / 10;
    } while (x != 0);

    

    if (n == rev) {
    	int angka, nDig = 0;
    	angka = rev;
    	while (angka > 0) {
    		angka = angka / 10;
    		nDig++;
		}
		if ((nDig % 2) == 0) {
			return true;
		} else {
			return false;
		}
	} else {
		return false;
	}
        
}

int main () {
	int k, p;
	int sum = 0;
	cin >> k >> p;
	int i = 0;
	int j = 0;
	while (i <= k) {
		if (isZcy(j)) {
			sum += j;
			i++;
		}
		j++;
	}
	//cout << j << " " << sum << endl;
	cout << sum % p << endl;
	return 0;
}
