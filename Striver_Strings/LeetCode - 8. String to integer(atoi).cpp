#include <iostream>
#include <string>
#include <climits> // for INT_MIN and INT_MAX
using namespace std;

int main(){
    string s;
    cout << "Enter the string: ";
    getline(cin, s); // Read the entire line including spaces

    int n = s.size();
    int i = 0;
    int sign = 1;

    // Handle leading spaces and sign
    while(i < n && s[i] == ' '){
        i++;
    }
    if(i < n && (s[i] == '-' || s[i] == '+')){
        sign = (s[i] == '-') ? -1 : 1;
        i++;
    }

    long long out = 0;

    while(i < n && s[i] >= '0' && s[i] <= '9'){
        if(out > INT_MAX / 10 || (out == INT_MAX / 10 && (s[i] - '0') > INT_MAX % 10)){
            // Overflow occurred
            cout << (sign == -1 ? "INT_MIN" : "INT_MAX");
            return 0;
        }
        out = out * 10 + (s[i] - '0');
        i++;
    }

    // Apply sign and check overflow
    out *= sign;
    if(out > INT_MAX){
        cout << "INT_MAX";
    }
    else if(out < INT_MIN){
        cout << "INT_MIN";
    }
    else{
        cout << out;
    }

    return 0;
}
