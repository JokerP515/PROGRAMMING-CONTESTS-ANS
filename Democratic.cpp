#include<bits/stdc++.h>
using namespace std;

string tolow(string &cad){ 
    for(char &c : cad){
        c=tolower(c);
    }
    return cad;
}

int main(){
    int n,m;
    string res = "";
    cin>>n>>m;
    if((n>=1 && n<=1000) && (m>=1 && m<=1000)){
        string cities[n];
        for(int i=0;i<n;i++){
            cin>>cities[i];
        }
        for(int i=0;i<n;i++){
            tolow(cities[i]);
        }
        for(int i=0;i<m;i++){
            map<char,int> letters_cont;
            for (const string& cad : cities) {
                char letter = cad[i];
                auto it = letters_cont.find(letter);
                if (it != letters_cont.end()) {
                    it->second++;
                } else letters_cont.insert({letter, 1});
            }
            int max_count = 0;
            char ele = 'z'; // Inicializa en Z
            for (const auto& entrada : letters_cont) {
                if (entrada.second > max_count || entrada.second == max_count && entrada.first < ele) {
                    max_count = entrada.second;
                    ele = entrada.first;
                }
            }
            res += ele;
        }
        cout<<res<<endl;
    }
}