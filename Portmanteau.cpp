#include<bits/stdc++.h>
using namespace std;

string tolow(string &cad){ 
    for(char &c : cad){
        c=tolower(c);
    }
    return cad;
}

int main(){
    string vowels = "aeiou";
    string cad1,cad2,cadF,cadAux;

    char v1,v2;
    bool vowelCad1=false,vowelCad2=false;
    cin>>cad1>>cad2;
    if((cad1.length()>=4 && cad2.length()>=4)&&(cad1.length()<=20 && cad2.length()<=20)){
        cad1 = tolow(cad1);
        cad2 = tolow(cad2);

        //First rule
        cadF.push_back(cad1[0]);
        for(int i=1;i<cad1.length();i++){ 
            if(find(vowels.begin(), vowels.end(), cad1[i]) != vowels.end()){
                vowelCad1=true;
                v1 = cad1[i];
                break;
            }else cadF.push_back(cad1[i]);
        }

        //Second rule
        cadAux.push_back(cad2[cad2.length()-1]);
        for(int i=cad2.length()-2;i>=0;i--){
            if(find(vowels.begin(), vowels.end(), cad2[i]) != vowels.end()){
                vowelCad2 = true;
                v2 = cad2[i];
                break;
            }else{
                cadAux = cad2[i] + cadAux;
            }
        }

        //third rule
        if(vowelCad2){
            cadF.push_back(v2);
        }else if(vowelCad1){
            cadF.push_back(v1);
        }else cadF.push_back('o');

        cadF+=cadAux;

        cout<<cadF<<endl;
    }
}