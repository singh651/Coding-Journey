#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[1000], n;
    cout << "Enter the number of elements : ";
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int reqsum;
    cout<< "Enter the required sum : ";
    cin >> reqsum;
    sort(a, a+n);
    int left = 0;
    int right = n-1;

    while(left < right){
        int sum = a[left] + a[right];
        if(sum == reqsum){
            cout << "YES";
            break;
        }

        else if(sum < reqsum){
            left++;
        }
        else{
            right--;
        }
    }
}