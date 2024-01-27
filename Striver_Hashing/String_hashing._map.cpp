#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    char q;
    a = 'a';
    string str;
    cout<< "Enter the string : ";
    cin >> str;
    

    map<char, int> mp;
    for(int i = 0; i < str.size(); i++){
        mp[str[i]]++;
    }

    cout<<"enter the character to find the frequency : ";
    cin >> q;
    cout << mp[q];

}