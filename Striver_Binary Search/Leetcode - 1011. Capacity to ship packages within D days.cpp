#include<bits/stdc++.h>
using namespace std;
int numofd(int a[100], int limit, int n){
    int days = 1, load = 0;
    for(int i = 0 ; i < n; i++){
        if(a[i]+ load > limit){
            days += 1;
            load = a[i];
        }
        else{
            load += a[i];
        }
    }
    return days;
}

int main(){
    int a[1000],n;
    cout << "Enter the total number of packages : ";
    cin >> n;
    cout << "Enter each weights : ";
    for(int i =0; i < n; i++){
        cin >> a[i];
    }
    int d;
    cout << "Enter the min no of days : ";
    cin >> d;

    
    int maxi = INT_MIN;

    for(int i =0; i < n; i++){
        maxi = max(maxi,a[i]);
    }

    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum + a[i];
    }
    int low = maxi;
    int high = sum;

    while(low <= high){
        int mid = (low + high)/2;
        int numofdays = numofd(a,mid,n);
        if(numofdays <= d){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    cout << low;
}