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
    int mid = 0;
    int high = n-1;
    while(mid <= high){
        if(a[mid] == 0){
            swap(a[low], a[mid]);
            low++;
            mid++;
        }
        else if(a[mid] == 1){
            mid++;
        }
        else{
            swap(a[high], a[mid]);
            high--;
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout << a[i];
    }
}