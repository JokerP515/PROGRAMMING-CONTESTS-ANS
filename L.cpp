#include<bits/stdc++.h>
using namespace std;

int main(){
    int R,C,K;
    bool res=true;
    cin>>R>>C>>K;
    if((R>=1 && R<=1000)&&(C>=1 && C<=1000)&&(K>=1 && K<=1000)){
        char leds[R][C];
        char pattern[R][K];
        vector<int> rows;
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                cin>>leds[i][j];
            }
            for(int l=0;l<K;l++){
                cin>>pattern[i][l];
            }
        }

        for(int i=0;i<R;i++){
            for(int j=0;j<K;j++){
                if(pattern[i][j]=='*'){
                    rows.push_back(i);
                    break;
                }
            }
        }

        for(int& i : rows){
            for(int j=0;j<C;j++){
                if(leds[i][j]=='-'){
                    res = false;
                    break;
                }
            }
            if(!res){
                break;
            }
        }
        if(res){
            cout<<"Y"<<endl;
        }else cout<<"N"<<endl;
    }
    return 0;
}