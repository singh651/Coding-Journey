#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the value : ";
    cin >> n;
    int low = 1;
    int high = n;
    int ans = 0;
    while (low <= high)
    {
        int mid = (low + high)/2;
        if(mid * mid >= n){
            ans = mid; 
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    cout << ans;
    
}