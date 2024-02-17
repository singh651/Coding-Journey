#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[1000],n;
    cout << "Enter the number of elemnts : ";
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    map<long long, int> mp;
    for(int i = 0; i < n; i++){
        mp[a[i]]++;
    }
    for(auto it: mp){
        if(it.second == 1){
            cout << it.first;
        }
    }
}