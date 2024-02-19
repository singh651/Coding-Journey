#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[1000],n;
    cout << "Enter the number of elements : ";
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int k;
    cout << "Enter the required sub-array sum : ";
    cin >> k;

    map<int, int> prefixsum;
    int sum = 0;
    int maxlength = 0;
    for(int i = 0; i < n; i++){
        sum = sum + a[i];
        if(sum == k){
            maxlength = max(maxlength, i+1);
        }

        int rem = sum - k;
        if(prefixsum.find(rem) != prefixsum.end()){
            int len = i - prefixsum[rem];
            maxlength = max(maxlength, len); 
        }
        if(prefixsum.find(sum) != prefixsum.end()){
            prefixsum[sum] = i;
        }

    }

    cout << "MaxLength : " << maxlength;

}