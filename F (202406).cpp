#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,pt;
    cin>>n>>pt;
    if((n>=1 && n<=1000)&&(pt>=1 && pt<=1000)){
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]>pt){
                arr[i]=-1;
            }
        }
        int max = -1; 
        for (int i = 0; i < n; ++i) {
            if (arr[i] != -1 && (max == -1 || arr[i] > max)) {
                max = arr[i];
            }
        }
        if(max!=-1){
            cout<<max<<endl;
        }
    } 
    return 0;
}