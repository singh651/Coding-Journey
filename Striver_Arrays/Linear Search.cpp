#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[1000],n,x;
    cout << "Enter the number of elemnts : ";
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << "Enter the element to search : ";
    cin >> x;

    for(int i = 0; i < n ; i++){
        if(a[i] == x){
            cout << "The index of the element is" << i;
        }
    }



}