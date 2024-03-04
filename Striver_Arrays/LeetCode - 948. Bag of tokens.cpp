#include<bits/stdc++.h>
using namespace std;


int main(){
    int a[1000], n;
    
    cout << "Enter the numberof elements: ";
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int power ;
    cout << "Enter the power : ";
    cin >> power;
    int i = 0;
    int j = n-1;
    int score = 0;
    int ans = 0;
    while(i <= j){
        if(a[i] <= power){
            score += 1;
            if(ans < score){
                ans = score;
            }
        power -= a[i];
        i++;
    }
    else if(score > 0){
        power += a[j];
        score -= 1;
        j--;
    }
    else{
        break;
    }
}
    cout << ans;
}