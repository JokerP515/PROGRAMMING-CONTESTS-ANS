#include<iostream>
#include<string>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
int main(){
    fast;
    while(true){
        int cont=0;
        string cad;
        cin>>cad;
        if(cin.fail()) break;
        if(cad.find('i') == string::npos) cont++; //valora la cad original
        
        //valora el resto de cadenas generadas a partir del encriptado caesar
        for(int i=1;i<26;i++){ 
            for(char& c : cad) c = (c == 'z') ? 'a' : c+1;
            if(cad.find('i') == string::npos) cont++;
        }
        if(cont==0){
            cout<<"impossible"<<endl;
        }else cout<<cont<<endl;
    }
    return 0;
}