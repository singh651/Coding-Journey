#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[1000], b[1000],n,m;
    cout <<"Enter the limit of both the arrays : ";
    cin >> n >> m;
    for(int i = 0; i <n ; i++){
        cin >> a[i];
    }

    for(int i = 0; i <m ; i++){
        cin >> b[i];
    }
    vector<int> ans;
    int i = 0;
    int j = 0;
    while(i < n && j < m){
       
        if(a[i] < b[j]){
            i++;
        }
        else if(a[i] > b[j]){
            j++;
        }

        else{
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }   

    for(auto & it: ans)
    {
        cout << it << " ";
    }
}