#include<bits/stdc++.h>
using namespace std;
int maxelem(int a[1000],int n){
    int maxi = INT_MIN;
    for(int i = 0; i < n; i++){
        maxi = max(a[i],maxi);
    }
    return maxi;
}
int totalHours(int a[1000], int mid, int n){
    int totalhour = 0;
    for(int i =0; i < n; i++){
        totalhour = totalhour + ceil(a[i]/(double)mid);
    }
    return totalhour;
}
int main(){
    int a[100],n;
    cout <<"Eneter the number of elements : ";
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int h;
    cout << "Enter the hour limit : ";
    cin >> h;
    int low = 1;
    int high = maxelem(a, n);

    while (low <= high)
    {
        int mid = (low + high)/2;
        int totalH = totalHours(a,mid, n);
        if(totalH <= h){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    cout << low ;
}