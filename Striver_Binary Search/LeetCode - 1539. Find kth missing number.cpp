#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[100], n;
    cout <<"Enter the number of elements : ";
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int low = 0;
    int high = n-1;
    int k;
    cout << "Enter the kth missing number to find : ";
    cin >> k;
    while(low <= high){
        int mid = (low + high)/2;
        int missing = a[mid] - mid - 1;
        if(missing < k){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    cout << k+high+1;

}