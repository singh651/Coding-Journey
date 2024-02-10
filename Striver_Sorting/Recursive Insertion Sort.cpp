#include<bits/stdc++.h>
using namespace std;

void insertionsort(int *a, int i, int n){
    if(i == n){
        return;
    }
    int j = i;
    while (j > 0 && a[j - 1] > a[j]) {
        int temp = a[j - 1];
        a[j - 1] = a[j];
        a[j] = temp;
        j--;
    }

    insertionsort(a, i + 1, n);

}


int main(){
    int a[1000],n;
    cout <<"Enter the number of elements : ";
    cin >> n;
    for(int i = 0; i < n ; i++){
        cin >> a[i];
    }
    
    insertionsort(a,0,n);
    cout << "Output : ";
    for(int i = 0; i < n ; i++){
        cout << a[i] << endl;
    }
}