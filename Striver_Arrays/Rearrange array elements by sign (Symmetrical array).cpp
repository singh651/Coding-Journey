#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[1000],n;
    cout << "Enter the number of elemnts : ";
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int ans[1000] = {0};
    int posIndex = 0;
    int negIndex = 1;
    for(int i = 0; i < n; i++){
        if(a[i] > 0){
            ans[posIndex] = a[i];
            posIndex += 2;
        }

        else{
            ans[negIndex] = a[i];
            negIndex += 2;
        }
    }

    for(int i = 0; i < n; i++){
        cout << "Alternate Array : " << ans[i]<< endl;
    }
}