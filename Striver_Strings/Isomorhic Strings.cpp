#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;
    cout << "Enter the 1st string : ";
    cin >> s1;
    cout << "Enter the 2nd string : ";
    cin >> s2;

    map<char, vector<int>> mp1;
    map<char, vector<int>> mp2;

    for(int i = 0; i < s1.size(); i++){
        mp1[s1[i]].push_back(i);
    }

    for(int j = 0; j < s2.size(); j++){
        mp2[s2[j]].push_back(j);
    }

    for(int i = 0; i < s1.size(); i++){
        if(mp1[s1[i]] != mp2[s2[i]]){
            cout << false;
        }
    }

    cout << true;
}