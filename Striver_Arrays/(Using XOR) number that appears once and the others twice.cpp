#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[1000],n;
    cout << "Enter the number of elemnts : ";
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int XOR = 0;
    for(int i = 0; i < n; i++){
        XOR = XOR^a[i];
    }

    cout << "Output :" << XOR;
}