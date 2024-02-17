#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[1000],n, k;
    cout << "Enter the number of elemnts : ";
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << "Enter the number of flips : ";
    cin >> k;
    int flip = 0;
    int i = 0;
    int j = 0;
    int ans = 0;
    while(i < n){
        if(a[i] == 0){
            flip++;
        }

        while(flip > k){
            if(a[j] == 0){
                flip--;
            }
        j++;
        }
        ans = max(ans, i-j+1);
        i++;
    }

    cout << "Answer : "  << ans;
}


