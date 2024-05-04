#include<iostream>
using namespace std;
int main(){
    int alyssa,konari,DrO;
    bool res = false;
    cin>>DrO>>alyssa>>konari;
    if((konari>=1)&&(alyssa>konari)&&(DrO>alyssa)&&(DrO<=150)){
        for(int i=1; i<=(DrO/alyssa);i++){
            int j = (DrO - i*alyssa) / konari;
            if((j>0) && ((DrO - (i*alyssa)) % konari == 0)){
                res = true;
                cout<<1<<endl;
                break;
            }
        }
        if(!res){
            cout<<0<<endl;
        }
    }
    return 0;
}