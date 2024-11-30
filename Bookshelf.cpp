#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#pragma GCC optimize(2)
#define endl '\n' 

int main(){
    fast;
    long long n=0,H=0;
    cin>>n>>H;
    if(n>0){
        bool p = false;
        vector<long long> v(3);
        long long res = 0;
        for(long long i=0;i<n;i++){
            cin>>v[0]>>v[1]>>v[2];
            if(v[0]>H && v[1]>H && v[2]>H) p = true;
            sort(v.begin(),v.end());
            if(v[1]<=H){
                res+=v[0];
            }else res+=v[1];
        }

        if(!p){
            cout<<res<<endl;
        }else cout<<"impossible"<<endl;
    }

    return 0;
}