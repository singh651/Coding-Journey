#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    string s;
    cout << "Enter the string : ";
    getline(cin, s); // Use getline to get the entire line, including spaces

    int n = s.size();
    stack<string> st;
    string str = "";

    for (int i = 0; i < n; i++) {
        if (s[i] == ' ') {
            st.push(str);
            str = "";
        } else {
            str += s[i];
        }
    }

    // Push the last word onto the stack
    st.push(str);

    // Print the words from the stack
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}
