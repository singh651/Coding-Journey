#include<bits/stdc++.h>
using namespace std;

int main(){
    int s;
    cout << "Enter the string : ";
    cin >> s;
    int i;
    cout << "Enter the ith bit : ";
    cin >> i;
    int x = 1;
    x = x << i;
    if(s&x != 0){
        cout << true;
    }
    else{
        cout<<false;
    }
}