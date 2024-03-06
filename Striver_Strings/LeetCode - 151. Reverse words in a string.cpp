#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout << "Enter the string : ";
     getline(cin, s);

    int n = s.size();
    int i = 0;
    string ans;
    while(i < n){
        string temp= "";
        while(i < n && s[i] == ' '){
            i++;
        }
        while(i < n && s[i] != ' '){
            temp += s[i];
            i++;
        }
        if(temp.size() > 0){
            if(ans.size() == 0){
                ans = temp;
            }
            else{
                ans = temp + ' ' + ans;
            }
        }
    }
    cout << ans;

}