#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string> str;
    int n;
    cout << "Enter the size of vector : ";
    cin >>   n;
    string a;
    for(int i = 0; i < n; i++){
        cin >> a;
        str.push_back(a);
    }
    int count = INT_MAX;
    for(int i = 1; i < n; i++){
        int sum = 0;
        for(int j = 0; j < str[i].size(); j++){
            if(str[0][j] == str[i][j]){
                sum++;
            }
        }
        count = min(sum,count);
    }
    
    string s = str[0].substr(0, count);
    cout << s;
}