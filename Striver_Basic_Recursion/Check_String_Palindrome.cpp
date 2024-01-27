#include <iostream>
#include <algorithm> // For std::reverse
#include <string>

using namespace std;

void Check_Palindrome(string s) {
    string str = s; // Make a copy of the original string
    reverse(str.begin(), str.end()); // Reverse the copied string

    if (s == str)
        cout << "YES";
    else
        cout << "NO";
}

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;
    Check_Palindrome(s);

    return 0;
}


//Recursive Approach
// bool palindrome(int i, string& s){
    
//     // Base Condition
//     // If i exceeds half of the string means all the elements 
//     // are compared, we return true.
//     if(i>=s.length()/2) return true;
    
//     // If the start is not equal to the end, not the palindrome.
//     if(s[i]!=s[s.length()-i-1]) return false;
    
//     // If both characters are the same, increment i and check start+1 and end-1.
//     return palindrome(i+1,s);
// }