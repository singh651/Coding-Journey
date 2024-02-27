#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[1000], n, x;
    cout << "Enter the number of elements : ";
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the element to search : ";
    cin >> x;
    int flag = 0;
    int low = 0;
    int high = n-1;
    while(low <= high){
        int mid = (low + high)/2;
        if(a[mid] == x){
            cout << mid;
            flag = 1;
            break;
        }
        else if (a[mid] < x){
            low = mid + 1;
        }

        else{
            high = mid - 1;
        }
    }

    if(flag == 0){
        cout << "Element not present  ";
    }
}