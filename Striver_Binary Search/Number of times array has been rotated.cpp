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

    int low = 0;
    int high = n-1;
    int index = -1;
    int ans = INT_MAX;
    while(low <= high){
        int mid = (low + high)/2;
        if (a[low] <= a[mid]) {
            // keep the minimum:
            if (a[low] < ans) {
                index = low;
                ans = a[low];
            }

            // Eliminate left half:
            low = mid + 1;
        }
        else { //if right part is sorted:

            // keep the minimum:
            if (a[mid] < ans) {
                index = mid;
                ans = a[mid];
            }

            // Eliminate right half:
            high = mid - 1;
        }
    }
    cout << index;
}