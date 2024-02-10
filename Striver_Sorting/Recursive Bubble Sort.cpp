#include<bits/stdc++.h>
using namespace std;

void bubblesort(int *a, int n){
    if(n <= 0 ){
        return;
    }
    else{
        for(int i = 0; i< n-1; i++){
            if(a[i]>a[i+1]){
                swap(a[i],a[i+1]);
            }
        }
    }
    bubblesort(a,n-1);
}


int main(){
    int a[1000],n;
    cout <<"Enter the number of elements : ";
    cin >> n;
    for(int i = 0; i < n ; i++){
        cin >> a[i];
    }
    
    bubblesort(a,n);
    cout << "Output : ";
    for(int i = 0; i < n ; i++){
        cout << "Output " << a[i] << endl;
    }
}