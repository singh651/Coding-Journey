#include<bits/stdc++.h>
using namespace std;

int main(){
    int s;
    cout<< "Enter the number : ";
    cin >> s;
    cout<<"Enter the ith bit to set : ";
    int i; 
    cin >> i;
    int x = 1;
    x = x << i;
    s = s|x;
    cout << s;
}