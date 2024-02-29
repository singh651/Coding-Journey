#include<bits/stdc++.h>
using namespace std;
int possible(int a[1000], int mid, int k, int m, int n){
    int count = 0;
    int noOfBoq  = 0;
    for(int i = 0; i < n; i++){
        if(a[i] <= mid){
            count++;
        }
        else{
            noOfBoq += (count/k);
            count = 0;
        }
    }
    noOfBoq += count/k;
    if(noOfBoq >= m){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int a[1000],n;
    cout << "Enter the number of elements  : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int m;
    cout << "Enter the no. of bouquets : ";
    cin >> m;
    int k;
    cout<< "Enter the no. of adjacent flowers reqd : ";
    cin >> k;
    int mini = INT_MAX;
    int maxi = INT_MIN;
    for(int i = 0; i < n; i++){
        mini = min(mini,a[i]);
        maxi = max(maxi,a[i]);
    }
    int low = mini;
    int high = maxi;

    while(low <= high){
        int mid = (low + high)/2;
        if(possible(a,mid,k,m,n)){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    cout << low;
}
