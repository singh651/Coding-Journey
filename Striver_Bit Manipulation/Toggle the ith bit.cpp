#include<bits/stdc++.h>
using namespace std;

int main(){
    int s;
    cout << "Enter the number to toggle : ";
    cin >> s;
    int i;
    cout << "Enter the ith bit to set : ";
    cin >> i;
    s = s^(1<<i);
    cout << s;
}