#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cout << "Enter the number : ";
    cin >> x;
    string s = "";
    while(x != 0){
        if(x%2 == 1){
            s += '1';
        }
        else{
            s += '0';
        }
        x = x/2;
    }
    reverse(s.begin(), s.end());
    cout << "Binary String : " << s;
    return 0;
}
