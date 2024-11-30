#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#pragma GCC optimize(2)
#define endl '\n'

void betterRanking(const vector<string>& arr1, const vector<string>& arr2) {
    //It will save all the current distance of each person
    unordered_map<string, int> ranking;
    for (int i = 0; i < arr1.size(); ++i) {
        ranking[arr1[i]] = i;
    }

    int maxDistance = 0;
    string favorite;
    bool p = false;

    //It will get the best ranking based on distance between 
    //estimated ranking and actual ranking in arr2
    for (int i = 0; i < arr2.size(); ++i) {
        const string& cad = arr2[i];
        if (ranking.count(cad)) {
            // Need to reverse the distance cuz we're looking to the left, not to the right
            int distance = (i - ranking[cad])*-1; 
            if (distance != 0) {
                p = true;
                if (distance > maxDistance) {
                    maxDistance = distance;
                    favorite = cad;
                }
            }
        }
    }

    if (p) {
        cout << favorite << endl; // got a favorite person
    } else {
        cout << "suspicious" << endl; // same ranking between estimated and real one
    }
}

int main() {
    fast;
    long int n=0;
    cin>>n;
    if(n>0){
        vector<string> arr1(n);
        vector<string> arr2(n);
        for(long int i=0;i<n;i++){
            cin>>arr1[i];
        }
        for(long int i=0;i<n;i++){
            cin>>arr2[i];
        }
        betterRanking(arr1, arr2);
    }
    
    return 0;
}
