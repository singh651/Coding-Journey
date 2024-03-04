#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    cout <<"Enter the original string : ";
    cin >> s1;

    cout << "Enter the rotated string : ";
    cin >> s2;

    queue<char> q1, q2;
    for(int i = 0; i < s1.size(); i++){
        q1.push(s1[i]);
    }

    for(int i = 0; i < s2.size(); i++){
        q2.push(s2[i]);
    }

    int k = s1.size() - 1;

    while(k != 0){
        char ch = q2.front();
        q2.pop();
        q2.push(ch);

        if(q1 == q2){
            cout << true;
            break;
        }

        k--;
    }
    if(q1 != q2){
        cout << false;
    }
}