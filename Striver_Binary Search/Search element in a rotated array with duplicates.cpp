#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[1000], n, x;
    cout << "Enter the number of elements : ";
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << "Enter the element to search : ";
    cin >> x;
    int low = 0;
    int high = n-1;
    while (low <= high)
    {
        int mid = (low + high)/2;
        if(a[mid] == x){
            cout <<"Present";
            break;
        }
        if(a[mid] == a[low] && a[mid] == a[high]){
            low++;
            high++;
            continue;
        }
        if(a[mid] >= a[low]){
            if(a[low] <= x && a[high] <= x){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        else{
            if(a[mid] <= x && x <= a[high]){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }        
    }

    cout << "Not Present : ";
    
}