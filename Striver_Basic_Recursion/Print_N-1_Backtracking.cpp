#include<bits/stdc++.h>
using namespace std;

void print_N_to_1(int i,int m){
    if(i==m+1){
        return;
    }
    print_N_to_1(i+1,m);
    cout<<i<<endl;
}




int main(){
    int n;
    cout<< " Enter the upper limit : ";
    cin>> n;
    int i = 1;
    print_N_to_1(i,n);
}