#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[1000], n, x;
    cout << "Enter the number of elements : ";
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the element to search : ";
    cin >> x;
    int low = 0;
    int high = n-1;
    int ans = n;
    while(low <= high){
        int mid = (low +high)/2;
        if(a[mid] > x){
            ans = mid;
            high = mid - 1;
        }

        else{
            low = mid + 1;
        }
    }
    cout << ans;
}