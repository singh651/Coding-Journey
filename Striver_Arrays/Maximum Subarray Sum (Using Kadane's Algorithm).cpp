#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[1000],n ;
    cout << "Enter the number of elements : ";
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int sum = 0;
    int maxsum = -1;
    int start = 0;
    int sumstart = -1;
    int sumend = -1;

    for(int i = 0; i < n; i++){
        if(sum == 0){
            start = i;
        }

        sum = sum + a[i];
        if(sum > maxsum){
            maxsum = sum;
            sumstart = start;
            sumend = i;
        }
        if( sum < 0){
            sum = 0;
            
        }
    }

    cout << "Maximum Sum is : " << maxsum << endl;;
    for(int i = sumstart; i <= sumend; i++){
        cout << a[i] << endl;
    }

}