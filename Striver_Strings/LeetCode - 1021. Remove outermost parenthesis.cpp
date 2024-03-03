#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout << "Enter the string : ";
    cin >> s;

    int n = s.length();
    string ans = "";
    int count= 0;
    for(int i = 0; i < n; i++){
        if( s[i] == '(' && count == 0){
            count++;
        }
        else if(s[i] == '(' && count > 0){
            count++;
            ans += '(';
        }
        else if(s[i] == ')' && count > 1){
            count--;
            ans += ')';
        }
        else{
            count--;
        }

    }
    cout << ans;
}