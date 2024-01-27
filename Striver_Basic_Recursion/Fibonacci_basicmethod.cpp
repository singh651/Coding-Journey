#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,fib[1000];
    cout<<"Enter the number of values in the series : ";
    cin >> n;
    fib[0] = 0;
    fib[1] = 1;
    for(int i = 2; i< n; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }
    for(int i = 0; i<n;i++){
        cout<< fib[i]<< endl;
    }
}
