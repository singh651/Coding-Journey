
#include<bits/stdc++.h>
using namespace std;

int sumOfAllDivisors(int n){
	// Write your code here.

	 int ans = 0;
    for(int i=1; i<=n; i++){
        ans += (n/i)*i;
    }

    return ans;
}

int main()
{
    int n;
    cin>> n;
    int a = sumOfAllDivisors(n);
    cout << a;
}