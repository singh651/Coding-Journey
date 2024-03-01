#include<bits/stdc++.h>
using namespace std;
int sumofdiv(int a[1000], int mid, int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += ceil(a[i]/(double)mid);
    }
    return sum;
}
int main(){
    int a[1000], n;
    cout<<"Enter the number of elements : ";
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int threshold;
    cout <<"Enter the threshold : ";
    cin >> threshold;

    int low = 1;
    int maxi = INT_MIN;
    for(int i = 0; i < n; i++){
        maxi = max(a[i], maxi);
    }
    int high = maxi;
    if(n > threshold){
		cout  << -1;
	}
    while(low <= high){
        int mid = (low + high)/2;
        if(sumofdiv(a,mid,n) <= threshold){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    cout << low;
}