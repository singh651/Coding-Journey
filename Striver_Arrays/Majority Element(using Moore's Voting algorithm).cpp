#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[1000],n;
    cout << "Enter the number of elements : ";
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int count = 0;
    int el = 0;
    for(int i = 0; i < n; i++){
        if(count == 0){
            count = 1;
            el = a[i];
        }
        else if(a[i] == el){
            count++;
        }
        else{
            count--;
        }
    }
    int count1 = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == el){
            count1++;
        }
    }

    if(count1 > n/2){
        cout << "Element : " << el;
    }
}
