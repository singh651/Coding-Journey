#include<bits/stdc++.h>
using namespace std;

void checkArmstrong(int n){
	//Write your code here
	int count = 0, m,t;
	m = n;
	t = n;
	int sum = 0;
	while(t != 0){
		count++;
		t = t/10;
	}
	while(m != 0){
		int ld = m%10;
		sum = sum + pow(ld, count);
		m = m/10;
	}

	if (sum == n)
		cout << true;
	else
		cout << false;
}

int main(){
    int n;
    cin >> n;
    checkArmstrong(n);
}