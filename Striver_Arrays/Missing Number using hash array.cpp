#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[1000], n,N;
    cout << "Enter the greatest element in the array : ";
    cin >> N;
    cout <<"Enter the number of elements : ";
    cin >> n;
    for(int i = 0; i <n ; i++){
        cin >> a[i];
    }

    int hasharr[n+1] = {0};
    for(int i = 0; i < n; i++){
        hasharr[a[i]]++;
    }

    for(int i = 1; i <= n; i++){
        if(hasharr[i]  == 0){
            cout << i;
            break;
        }
    }
}