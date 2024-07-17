#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true) {
        int n;
        cin >> n;
        if (n == -1) break;
        if (cin.fail()) break;

        unordered_set<char> hangman;
        string aux;
        cin >> aux;
        for (char& c : aux) {
            hangman.insert(c);
        }

        string game;
        cin >> game;

        cout << "Round " << n << endl;

        int wrong_guesses = 0;

        for (char guess : game) {
            if (hangman.find(guess) != hangman.end()) {
                hangman.erase(guess);
                if (hangman.empty()) {
                    cout << "You win." << endl;
                    break;
                }
            } else {
                wrong_guesses++;
                if (wrong_guesses == 7) {
                    cout << "You lose." << endl;
                    break;
                }
            }
        }

        if (!hangman.empty() && wrong_guesses < 7) {
            cout << "You chickened out." << endl;
        }
    }

    return 0;
}
