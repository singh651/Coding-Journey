#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[1000],n;
    cout << "Enter the number of elements : ";
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    vector<int> v(n, 0);
    int maxi = INT_MIN;
    for(int i = n-1; i > 0; i--){
        if(a[i] > maxi){
            v.push_back(a[i]);
        }
        maxi = max(maxi, a[i]);
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++){
        cout << v[i]<< endl;
    }
}