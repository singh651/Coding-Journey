#include<bits/stdc++.h>
using namespace std;


int main() {
    int a[1000], n;
    cout << "Enter the number of elements : ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int index  = -1;
    for(int i = n-2;  i > 0; i-- ){
        if(a[i] < a[i+1]){
            index = i;
            break;
        }
    }

    if(index == -1){
        reverse(a, a+n);
    }

    for(int i = n-1; i > index; i--){
        if(a[index] < a[i]){
            swap(a[index], a[i]);
            break;
        }
    }

    reverse(a + index + 1, a+n);
    for(int i = 0; i < n; i++){
        cout << a[i];
    }
}
