#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    char q;
    a = 'a';
    string str;
    cout<< "Enter the string : ";
    cin >> str;
    

    int hash[1000] = {0};
    for(int i = 0; i < str.size(); i++){
        hash[str[i] - 'a']++;
    }

    cout<<"enter the character to find the frequency : ";
    cin >> q;
    cout << hash[q-a];

}