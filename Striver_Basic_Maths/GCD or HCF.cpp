#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b; 
    for(int i = 1; i<= min(a,b) ; i++){
            if(a % i == 0 && b % i == 0){
                c = i;
            }
        }
   
    cout<<"GCD is : "<< c;
}