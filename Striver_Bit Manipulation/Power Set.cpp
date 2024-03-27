#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> powerset;
    vector<int> set = {1,2,3};
    int n = set.size();
    int nofsubset = (1<<n);
    for(int i = 0; i < nofsubset; i++){
        vector<int> subset;
        for(int j = 0; j < 3; j++){
            if(i & (1 << j)){
                subset.push_back(set[j]);
            }
        }
        powerset.push_back(subset);
    }
    for(auto it:powerset){
        for(auto num:it){
        cout<< num;
        }
        cout<< endl;
    }
}