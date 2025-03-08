#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize(2)
#define endl '\n'
using namespace std;

int main(){
    fast;
    long long n, a=0, b=0;
    bool flag = false;
    cin>>n;
    for(long long i = 0; i < n; i++){
        long long A, B;
        cin>>A>>B;
        if(i != 0 && !flag){ 
            if(a>A || b>B) flag = true;
        }
        if(!flag) {
            a = A;
            b = B;
        }
    }
    cout << (flag ? "no" : "yes") << endl;
    return 0;
}
