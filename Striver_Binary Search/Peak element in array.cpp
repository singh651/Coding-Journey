#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[1000], n;
    cout << "Enter the number of elements : ";
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    if(n == 1){
        cout << a[0];
    }
    if(a[n-1] > a[n-2]){
        cout << n-1; 
    }
    int low = 1;
    int high = n-2;
    while (low <= high)
    {
        int mid = (low + high)/2;
        if(a[mid] > a[mid+1] && a[mid] > a[mid-1]){
            cout << mid;
            break;
        }
        if(a[mid] < a[mid + 1]){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    
}