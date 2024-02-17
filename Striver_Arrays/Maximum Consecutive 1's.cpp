#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[1000],n;
    cout << "Enter the number of elemnts : ";
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int count = 0;
    int maxi = 0;

    for(int i = 0; i < n; i++){
        if(a[i] == 1){
            count++;
        } 
        else{
            count = 0;
        }
    maxi = max(maxi, count);
    }

    cout << "Max presence : " << maxi;
}

    