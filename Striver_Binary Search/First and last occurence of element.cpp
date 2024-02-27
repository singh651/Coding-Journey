#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[1000],n;
    cout << "Enter the number of elements : ";
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int x; 
    cout << "Enter the element to search occurences : ";
    cin >> x;

    int first = -1;
    int low = 0;
    int high = n-1;
    while(low <= high){
        int mid = (low + high)/2;
        if(a[mid] == x){
            first = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    int last = -1;
    low = 0;
    high = n-1;
    while(low <= high){
        int mid = (low + high)/2;
        if(a[mid] == x){
            last = mid;
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    cout << "First Occurence : " << first << "Last Occurence : " << last;
}


