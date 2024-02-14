#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[1000],n;
    cout << "Enter the number of elements : ";
    cin >> n;
    for(int i = 0; i< n ; i++){
        cin >> arr[i];
    }
    int j = 0;
    for(int i = 1; i < n; i++){
        if(arr[j] != arr[i]){
            j++;
            arr[j] = arr[i];
        }
    }
    for(int i = 0; i <= j ; i++){
        cout << arr[i]<< endl;
    }

}