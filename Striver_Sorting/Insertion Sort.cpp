#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[1000],n;
    cout <<"Enter the number of elements: ";
    cin >> n;
    for(int i = 0; i <n; i++){
        cin >> a[i];
    }

    for(int i = 1;i < n; i++){
        int j = i;
        while( j > 0 && a[j-1] > a[j]){
            swap(a[j-1],a[j]);
            j--;
        }
    }

    for(int i = 0; i<n; i++){
        cout<< a[i]<< endl;
    }
}