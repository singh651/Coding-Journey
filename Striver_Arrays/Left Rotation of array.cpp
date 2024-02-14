#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[1000],n;
    cout << "Enter the number of elements : ";
    cin >> n;
    for(int i = 0; i< n ; i++){
        cin >> a[i];
    }

    int temp = a[0];
    for(int i = 0; i <n ; i++){
        a[i] = a[i+1];
    }
    a[n-1] = temp;
    for(int i = 0; i< n ; i++){
        cout << a[i]<< endl;
    }

}