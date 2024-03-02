#include<bits/stdc++.h>
using namespace std;
bool placecows(int a[100], int dist, int cows, int n){
    int countcows = 1;
    int last = a[0];
    for(int i = 0; i < n; i++){
        if(a[i]-last >= dist){
            countcows ++;
            last = a[i];
        }
        if(countcows >= cows){
            return true;
        }
    }
}
int main(){
    int a[1000],n;
    cout << "Enter the no of elements : ";
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int k;
    cout <<"Enter the no of cows : ";
    cin >> k;

    int low = 1; 
    int high = a[n-1] - a[1];

    while(low<= high){
        int mid = (low + high)/2;
        if(placecows(a,mid,k, n) == true){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    cout << high;
}