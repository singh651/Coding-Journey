#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout << "Enter the string : ";
    cin >> s;
    int n = s.size();
    map<char, int> mp;
    for(int i = 0; i < n; i++){
        mp[s[i]]++;
    }
    int low = 0;

    for(auto it: mp){
        while(it.second != 0){
            s[low++] = it.first;
            it.second--;
        }
    }
    cout << s;
}