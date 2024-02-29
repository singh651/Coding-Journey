#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[1000], n;
    cout << "Enter the number of elements : ";
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

   
    int low = 1;
    int high = n - 2;
    while(low <= high){
        int mid = (low + high)/2;
        if(a[mid] != a[mid - 1] && a[mid] != a[mid + 1]){
            cout << a[mid];
            break;
        }
        if((mid%2 == 0 && a[mid] == a[mid + 1]) || (mid%2 == 1 && a[mid] == a[mid-1])){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
     if(a[0] != a[1]){
        cout << a[0];
    }
    if(a[n-1] != a[n-2]){
        cout << a[n-1];
    }
}