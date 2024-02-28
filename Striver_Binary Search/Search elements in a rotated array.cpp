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
    int low = 0;
    int high = n-1;
    while (low <= high)
    {
        int mid = (low + high)/2;
        if(x == a[mid]){
            cout << mid;
            break;
        }
        if(a[low] <= a[mid]){
            if(a[low] <= x && a[mid] >= x){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        else{
             if(a[mid] <= x && a[high] >= x){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
    }
}
    