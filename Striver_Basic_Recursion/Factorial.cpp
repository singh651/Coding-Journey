  #include<bits/stdc++.h>
  using namespace std;

  void Factorial(int i,int factorial){
    
    if(i == 0){
        cout << factorial;
        return;
    }
    Factorial(i-1,factorial*i);

  }  



    int main(){
    int n;
    cout<< "Enter the number to find ther factorial : ";
    cin>> n;
    Factorial(n,1);
  }