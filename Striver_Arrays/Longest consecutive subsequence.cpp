#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements : ";
    cin >> n;
    vector <int> v(n, 0);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    unordered_set<int> uns;
    for(int i = 0; i < n; i++){
        uns.insert(v[i]);
    }
    int longest = 1;
    for(auto it: uns){
        if(uns.find(it-1) == uns.end()){
            int cnt = 1;
            int x = it;

            while (uns.find(x+1) != uns.end() )
            {
                x = x + 1;
                cnt = cnt + 1;
            }
        longest = max(longest, cnt);
        }
    }

    cout << "Longest subsequence is : " << longest;

+    
}
