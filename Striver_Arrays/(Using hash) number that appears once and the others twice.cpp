#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[1000],n;
    cout << "Enter the number of elemnts : ";
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int hasharr[2000];
    for(int i = 0; i < n; i++){
        hasharr[a[i]]++;
    }
    for(int i = 0; i < n; i++){
        if(hasharr[i] == 1){
            cout << i;
        }
    }
}

    
