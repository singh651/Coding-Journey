#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[1000], n;
    cout << "Enter the number of elements : ";
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        if(i == 0){
            if(a[i] != a[i+1]){
                cout << a[i];
                break;
            }
        }
        if(i == n-1){
            if(a[i] != a[i-1]){
                cout << a[i];
                break;
            }
        }
        else{
            if(a[i] != a[i-1] && a[i] != a[i+1]){
                cout << a[i];
                break;
            }
        }
    }
}