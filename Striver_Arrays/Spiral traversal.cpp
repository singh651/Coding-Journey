#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[1000][1000];
    int n, m;
    cout << "Enter the number of rows : ";
    cin >> n;
    cout << "Enter the number of columns : ";
    cin >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    
    int top = 0;
    int bottom = n-1;
    int left = 0;
    int right = n-1;
    vector<int> ans;
    while (left <= right && top <= bottom)
    {
        for(int i = left; i <= right; i++){
            ans.push_back(a[top][i]);
        }
        top++;

        for(int i = top; i <= bottom; i++){
            ans.push_back(a[i][right]);
        }
        right--;
        if(top <= bottom){
        for(int i = right; i >= left; i--){
            ans.push_back(a[bottom][i]);
        }
    }
        if(left <= right){
        bottom--;
        for(int i = bottom; i >= top; i-- ){
            ans.push_back(a[i][left]);
        }
        left++;
        }
    }

    for(auto it: ans){
        cout<< it << " ";
    }
}
    
    