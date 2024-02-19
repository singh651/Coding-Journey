#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[1000], n;
    cout << "Enter the number of elements : ";
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;

    for(int i = 0; i < n; i++){

        if(a[i]  == 0){
            count0++;
        }

        else if(a[i] == 1){
            count1++;
        }

        else{
            count2++;
        }
    }

    for(int i = 0; i < count0; i++){
        cout << 0 << endl;
    }

    for(int i = 0; i < count1; i++){
        cout << 1 << endl;
    }

    for(int i = 0; i < count2; i++){
        cout << 2 << endl;
    }
}