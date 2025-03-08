#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize(2)
#define endl '\n'
using namespace std;

int keyPadList(char c){
    if(c == 'a' || c == 'b' || c == 'c') return '2';
    if(c == 'd' || c == 'e' || c == 'f') return '3';
    if(c == 'g' || c == 'h' || c == 'i') return '4';
    if(c == 'j' || c == 'k' || c == 'l') return '5';
    if(c == 'm' || c == 'n' || c == 'o') return '6';
    if(c == 'p' || c == 'q' || c == 'r' || c == 's') return '7';
    if(c == 't' || c == 'u' || c == 'v') return '8';
    if(c == 'w' || c == 'x' || c == 'y' || c == 'z') return '9';
    return -1; // Default case if character is not a lowercase letter
}

string convertToKeyPadNumber(const string& s) {
    string result;
    for(char c : s) {
        result += keyPadList(c);
    }
    return result;
}

int main(){
    fast;
    long long n, m;
    cin >> n >> m;
    vector<string> words(n);
    vector<string> phoneNumbers(m);
    unordered_map<string, vector<string>> phoneToWords;

    for(long long i = 0; i < n; i++){
        cin >> words[i];
    }
    for(long long i = 0; i < m; i++){
        cin >> phoneNumbers[i];
    }

    for(const auto& word : words){
        string converted = convertToKeyPadNumber(word);
        phoneToWords[converted].push_back(word);
    }

    for(const auto& phoneNumber : phoneNumbers){
        if(phoneToWords.find(phoneNumber) != phoneToWords.end()){
            cout << phoneToWords[phoneNumber].size() << " ";
            for(long long i = 0; i < phoneToWords[phoneNumber].size(); i++){
                cout << phoneToWords[phoneNumber][i] << (i == phoneToWords[phoneNumber].size()-1 ? "" : " ");
            }
            cout << endl;
        } else {
            cout << "0" << endl;
        }
    }

    return 0;
}