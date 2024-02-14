#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[1000],n;
    cout << "Enter the number of elemnts : ";
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int j = -1;
    for(int i = 0; i < n ; i++){
        if(a[i] == 0){
            j = i;
            break;
        }
    }

    for(int i = j+1; i < n; i++){
        if(a[i] != 0){
            swap(a[j],a[i]);
            j++;
        }
    }

    for(int i = 0; i < n; i++){
        cout << a[i];
    }
    
}