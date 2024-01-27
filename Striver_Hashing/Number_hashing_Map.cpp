#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[1000],n,q;
    cout<< "Enter the number of elements : ";
    cin >> n;
    for(int i = 0; i < n ; i++){
        cin >> arr[i];
    }

    map <int, int> mp;
    for(int i = 0; i < n; i++){
        mp[arr[i]]++;
    }

    cout<<"enter the number to find the frequency : ";
    cin >> q;
    cout << mp[q];

}
