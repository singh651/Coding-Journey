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
    int right = 0;
    int left = 0;
    int sum = a[0];
    int maxlength = 0;
    while(right < k){

        while( left <= right && sum > k){
            sum = sum - a[left];
            left++;
        }

        if(sum == k){
            maxlength = max(maxlength, right - left + 1);
        }


        right++;
        if (right < n) 
        {
            sum = sum + a[right];
        }   
    }
        cout << "Maxlength" << maxlength;
}