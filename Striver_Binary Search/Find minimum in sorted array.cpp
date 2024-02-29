#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[1000],n;
    cout << "Enter the number of elements : ";
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int low = 0;
    int high = n-1;
    int ans = INT_MAX;
    while (low <= high)
    {
        int mid = (low + high)/2;
        if(a[mid] >= a[low]){
            ans = min(ans, a[low]);
            low = mid + 1;
        }
        else{
            ans = min(ans, a[mid]);
            high = mid - 1;
        }
    }

    cout << "Minimum element" << ans;
}
    