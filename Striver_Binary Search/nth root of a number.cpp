#include<bits/stdc++.h>
using namespace std;
int product(int n, int mid, int m){
    long long prod = 1;
    for(int i = 0; i < m ; i++){
        prod = prod*mid;
    }
    if(prod == n){
        return 1;
    }
    else if(prod > n){
        return 2;
    }
    else{
        return 3;
    }
}
int main(){
    int n,m;
    cout << "Enter the value : ";
    cin >> n;
    int low = 1;
    int high = n;
    cout << "Enter the mth root : ";
    cin >> m; 
    while(low <= high){
        int mid = low + ((high - low)/2);
        int midproduct = product(n, mid, m);
        if(midproduct == 1){
            cout << mid;
            break;
        }
        else if(midproduct == 2){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
}