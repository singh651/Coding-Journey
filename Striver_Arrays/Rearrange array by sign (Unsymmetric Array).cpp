#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements : ";
    cin >> n;
    
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    vector<int> pos, neg;

    for(int i = 0; i < n; i++){
        if(a[i] >= 0)
            pos.push_back(a[i]);
        else
            neg.push_back(a[i]);
    }

    if( pos.size() > neg.size() ){
        for(int i = 0; i < neg.size(); i++){
            a[2*i] = pos[i];
            a[2*i + 1] = neg[i];
        }

        int index = neg.size()*2;
        for(int i = neg.size(); i < pos.size(); i++){
            a[index] = pos[i];
            index++;
        }
    }

    else{
        for(int i = 0; i < pos.size(); i++){
            a[2*i] = pos[i];
            a[2*i +1] = neg[i];
        }

        int index = pos.size()*2;
        for(int i = pos.size(); i < neg.size(); i++){
            a[index] = neg[i];
            index++;
        }
    }

    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    return 0;
}
