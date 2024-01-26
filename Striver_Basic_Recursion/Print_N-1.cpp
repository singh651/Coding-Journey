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

//using vector

void print(int i,vector<int>&v) {
    if(i>0) {
        v.push_back(i);
        print(i-1,v);
    }
}
 
vector<int> printNos(int n) {
    vector<int>v;
    print(n,v);
    return v;
}