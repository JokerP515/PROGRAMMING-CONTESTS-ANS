#include<iostream>
using namespace std;

int main(){
    int s1,s2;
    cin>>s1>>s2;
    if((s1>=0)&&(s1<=s2)&&(s2>=1)&&(s2<=100)){
        float op1 = static_cast<float> (s1)/(s1+s2);
        float op2 = static_cast<float> (s2-s1)/(s1+s2);
        if(op1>=op2){
            cout<<"E"<<endl;
        }else cout<<"H"<<endl;
    }
    return 0;
}