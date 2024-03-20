#include<bits/stdc++.h>
using namespace std;

int main(){
    string x;
    cout << "Enter the binary number : ";
    cin >> x;
    int l = x.size();
    int dec = 0, mul = 1;
    for(int i = l-1; i >= 0; i--){
        if(x[i] == '1'){
            dec += x[i]*mul;
        }
        mul *= 2;
    }
    cout << "Decimal No. : " << dec;
    return 0;
}