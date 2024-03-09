#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[1000], n;
    cout << "Enter the number of elements : ";
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    map<int, int> mp;
    for (int i = 0; i < n; i++) { // iterating over array 'a' using a regular for loop
        mp[a[i]]++;
    }

    int maxfreq = INT_MIN;
    for(auto it: mp){
        maxfreq = max(maxfreq, it.second);
    }

    int count = 0;
    for(auto it: mp){
        if(it.second == maxfreq){
            count += maxfreq;
        }
    }

    cout << count;
}