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

    set <int> s;
    for(int i = 0; i <n ; i++){
        s.insert(a[i]);
    }

    for(int i = 0; i <m ; i++){
        s.insert(b[i]);
    }

    vector < int > Union;
    for (auto & it: s)
    Union.push_back(it);

    for (auto & val: Union)
    cout << val << " ";
}