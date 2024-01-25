#include<bits/stdc++.h>
using namespace std;

void print_n_times(int m){
    
    if(m==0){
        return;
    }
    else{
        cout<<"Parikshit "<<endl;
    }
    m--;
    print_n_times(m);
}


int main(){
    int n;
    cout<<"Enter the no. of times: ";
    cin>> n;
    print_n_times(n);
}
