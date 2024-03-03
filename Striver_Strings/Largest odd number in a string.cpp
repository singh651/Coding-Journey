#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout << "Enter the string : ";
    cin >> s;
    string result;
    int n = s.size();
    for(int i = n-1; i >= 0; i--){
        if((s[i] - '0')%2 == 1){
            result =  s.substr(0,i+1);
            break;
        }
    }
    cout << result;
    return 0;
}