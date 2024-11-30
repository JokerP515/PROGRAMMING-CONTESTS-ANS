#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#pragma GCC optimize(2)
#define endl '\n'

int main() {
    fast;
    string cad, flip;
    cin >> cad >> flip;

    bool flip_horizontal = false;
    bool flip_vertical = false;

    // Check the actual valid operations to reduce cost
    // Valid operation is the one the has effect on string
    for (char c : flip) {
        if (c == 'h') flip_horizontal = !flip_horizontal;
        if (c == 'v') flip_vertical = !flip_vertical;
        if (c == 'r') {
            flip_horizontal = !flip_horizontal;
            flip_vertical = !flip_vertical;
        }
    }

    // Getting the result by one iteration
    string result = cad;
    for (size_t i = 0; i < cad.size(); ++i) {
        char ch = cad[i];

        // Change the char depending on bool
        if (flip_horizontal) {
            if (ch == 'p') ch = 'q';
            else if (ch == 'q') ch = 'p';
            else if (ch == 'b') ch = 'd';
            else if (ch == 'd') ch = 'b';
        }
        if (flip_vertical) {
            if (ch == 'p') ch = 'b';
            else if (ch == 'b') ch = 'p';
            else if (ch == 'q') ch = 'd';
            else if (ch == 'd') ch = 'q';
        }

        // reverse if needed in the result
        result[(flip_horizontal ? cad.size() - 1 - i : i)] = ch;
    }

    cout << result << endl;
    return 0;
}
