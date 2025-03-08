#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize(2)
#define endl '\n'
using namespace std;

long long humanPiramid(long long n){
    long long cont=0;
    while(n>=0){
        cont++;
        n-=cont;
    }
    return cont-1;
}

int main(){
    fast;
    long long n;
    cin>>n;
    cout<<humanPiramid(n)<<endl;
    return 0;
}
