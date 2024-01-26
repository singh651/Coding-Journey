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

// Using vector

vector<int> printNos(int x) {
    // Write Your Code Here
     
    if(x == 0)
    {
        vector<int> v;
        return v;
    }
    vector<int> v = printNos(x-1);
    v.push_back(x);
    return v;
    
}