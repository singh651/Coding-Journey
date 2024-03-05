#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout << "Enter the string : ";
    cin >> s;

    int n = s.size(), ans = 0;
    for(int i = 0; i < n; i++){
        map<char, int> mp;
        for(int j = i; j < n; j++){
            mp[s[j]]++;
            int mf = 0, lf = INT_MAX;
            for(auto it: mp){
                mf = max(mf, it.second);
                lf = min(lf, it.second);
            }
            ans += (mf - lf);
        }
    }
    cout << ans;
}