#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[1000],n,q;
    cout<< "Enter the number of elements : ";
    cin >> n;
    for(int i = 0; i < n ; i++){
        cin >> arr[i];
    }

    int hash[1000] = {0};
    for(int i = 0; i <= n; i++){
        hash[arr[i]]++;
    }

    cout<<"enter the number to find the frequency";
    cin >> q;
    cout << hash[q];

}

