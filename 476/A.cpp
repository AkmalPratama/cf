#include <iostream>

using namespace std;

int main() {
    int k, n, s, p;
    cin >> k >> n >> s >> p;
    int totalPlane = k * n;
    int res = s * p;
    if (n < s) {
        if (k >= p) {
            if ((k % p) == 0) {
                cout << (k/p) << endl;
            } else {
                cout << (k/p)+1 << endl;
            }
        } else {
            cout << 1 << endl;
        }
    } else {
        int multiplier;
        if ((n % s) == 0) {
            multiplier = n / s;
        } else {
            multiplier = n / s;
            multiplier++;
        }
        int sheetNeeded = k * multiplier;
        int packBuy;
        packBuy = ((sheetNeeded % p) == 0) ? (sheetNeeded / p) : ((sheetNeeded / p) + 1);
        cout << packBuy << endl;
    }
    return 0;
}