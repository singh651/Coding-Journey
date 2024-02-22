#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[1000], n;
    cout << "Enter the number of elements : ";
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    int miniPrice = INT_MAX;
    int maxProfit = 0;
    for(int i = 0; i < n; i++){
        miniPrice = min(miniPrice, a[i]);
        maxProfit = max(maxProfit, a[i] - miniPrice);
    }

    cout << "MaxProfit : "<< maxProfit;

}