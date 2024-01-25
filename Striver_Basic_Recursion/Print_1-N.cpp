#include<bits/stdc++.h>
using namespace std;

void print_till_n(int i,int m){
    
    if(m==i-1){
        return;
    }
    else{
        cout<<i<<endl;
    }
    i++;
    print_till_n(i,m);
}


int main(){
    int n;
    cout<<"Enter the upper - limit: ";
    cin>> n;
    int i = 1;
    print_till_n(i,n);
}