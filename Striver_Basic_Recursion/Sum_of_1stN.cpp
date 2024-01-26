  #include<bits/stdc++.h>
  using namespace std;

  void sum_of_n(int i, int sum){
  if(i<1){
    cout<< sum;
    return;
    }
  sum_of_n(i-1,sum + i);
  
 }



  int main(){
    int n;
    cout<< "Enter the upper limit : ";
    cin>> n;
    sum_of_n(n,0);
  }
