#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[1000], n, k;
    cout << "Enter the number of elements : ";
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    cout<<"Enter the required sum : ";
    cin >> k;

    int presum = 0;
    int count = 0;
    
    map<int, int> mpp;
    mpp[0] = 1;
    for(int i = 0; i < n; i++){
        presum = presum + a[i];
        int remainder = presum - k;
        count += mpp[remainder];
        mpp[presum] += 1;
    }

    cout <<"No. of Sub-arrays : " << count;

}