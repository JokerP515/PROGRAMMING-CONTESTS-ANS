#include <iostream>

using namespace std;

long long battle(long long att) {
    if (att == 1)
        return 1;

    long long att_min = 1;
    long long res = att;
    
    while (res > 1) {
        if (res % 2 == 0) {
            res /= 2;
        } else {
            res = res / 2 + 1;
        }
        att_min++;
    }
    
    return att_min;
}

int main() {
    long long n;
    cin >> n;

    cout << battle(n) << endl;

    return 0;
}
