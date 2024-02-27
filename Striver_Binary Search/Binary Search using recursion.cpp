#include<bits/stdc++.h>
using namespace std;


void binary_search(int x, int a[1000], int low, int high){
    int mid = (low + high)/2;
    if(a[mid] == x){
        cout << mid;
    }
    else if(a[mid] < x){
        binary_search(x, a, mid + 1, high);
    }
    else{
        binary_search(x, a, low, mid - 1);
    }
}

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
    binary_search(x,a, 0, n-1);
}

