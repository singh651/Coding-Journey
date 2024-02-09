#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[1000],n;
    cout << "Enter the number of elements: ";
    cin >> n;
    for(int i = 0;i <n ; i++){
        cin >> a[i];
    }

    for(int i = n-1; i >= 0; i--){
        int swapp = 0;
        for(int j = 0; j < i; j++){
            if(a[j] > a[j+1]){
                swap(a[j],a[j+1]);
                swapp = 1;
            }
        }
        if (swapp = 0){
                break;
            }
    }
    for(int i = 0;i <n ; i++){
        cout << a[i]<< endl;
    }
}