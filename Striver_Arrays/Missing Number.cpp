#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[1000], n,N;
    cout << "Enter the greatest element in the array : ";
    cin >> N;
    cout <<"Enter the limit for the array : ";
    cin >> n;
    for(int i = 0; i <n ; i++){
        cin >> a[i];
    }

    int sum1 = 0;
    int sum2 = 0;

    for(int i = 0; i < n; i++){
        sum2 = sum2 + a[i];
    }

    for(int i = 1; i <= N; i++){
        sum1 = sum1 + i;
    }

    int missing = sum1 - sum2;
    cout << missing;

}