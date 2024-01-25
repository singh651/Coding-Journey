#include<bits/stdc++.h>
using namespace std;

void print_till_n(int i){
    
    if(i == 0){
        return;
    }
    else{
        cout<<i<<endl;
    }
    i--;
    print_till_n(i);
}


int main(){
    int n;
    cout<<"Enter the upper - limit: ";
    cin>> n;
    print_till_n(n);
}