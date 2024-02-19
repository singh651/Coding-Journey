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
    map<int, int> mp;
    int sum;
    cout<< "Enter the required sum : ";
    cin >> sum;

    for(int i = 0; i < n; i++){
        int b = a[i];
        int findnum = sum - b;
        if(mp.find(findnum) != mp.end()){
            cout<< mp[findnum]<< " " << i;
        }
        mp[b] = i;
    }
}