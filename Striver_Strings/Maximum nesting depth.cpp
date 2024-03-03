#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout << "Enter the string : ";
    cin >> s;
    int maxi = INT_MIN;
    int n = s.length();
    int count = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '('){
            count++;
        }
        else if(s[i] == ')'){
            count--;
        }
        maxi = max(maxi,count);
    }
    cout << maxi;
}