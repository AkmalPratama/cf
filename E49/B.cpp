#include < bits / stdc++.h >
using namespace std;

int main() {
    long long n, q;
    cin >> n >> q;
    for (int i = 0; i < q; i++) {
        long long x, y;
        cin >> x >> y;
        if ((x + y) % 2 == 0) {
            if ((x % 2) == 1) {
                if (x == 1) {
                    cout << (1 + y) / 2 << endl;
                } else {
                    cout << (n * ((x - 1) / 2)) + ((1 + y) / 2) << endl;
                }
            } else {
                if (x == 2) {
                    cout << (y / 2) + ((n + 1) / 2) << endl;
                } else {
                    cout << (n * ((x / 2) - 1)) + (y / 2) + ((n + 1) / 2) << endl;
                }
            }
        } else {
            if ((x % 2) == 1) {
                if (x == 1) {
                    cout << (y / 2) + ((n % 2 == 0) ? ((n * n) / 2) : ((n * n) / 2 + 1)) << endl;
                } else {
                    cout << (n * ((x - 1) / 2)) + ((y / 2) + ((n % 2 == 0) ? ((n * n) / 2) : ((n * n) / 2 + 1))) << endl;
                }
            } else {
                if (n % 2 == 0) {
                    if (x == 2) {
                        cout << ((y + 1) / 2) + ((n + 1) / 2) + ((n % 2 == 0) ? ((n * n) / 2) : ((n * n) / 2 + 1)) << endl;
                    } else {
                        cout << (n * ((x / 2) - 1)) + ((y + 1) / 2) + ((n + 1) / 2) + ((n % 2 == 0) ? ((n * n) / 2) : ((n * n) / 2 + 1)) << endl;
                    }
                } else {
                    if (x == 2) {
                        cout << ((y + 1) / 2) + ((n + 1) / 2) + ((n % 2 == 0) ? ((n * n) / 2) : ((n * n) / 2 + 1)) - 1 << endl;
                    } else {
                        cout << (n * ((x / 2) - 1)) + ((y + 1) / 2) + ((n + 1) / 2) + ((n % 2 == 0) ? ((n * n) / 2) : ((n * n) / 2 + 1)) - 1 << endl;
                    }
                }
            }
        }
    }
    return 0;
}
