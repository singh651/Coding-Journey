#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[1000],n;
    cout<<"Enter the number of elements: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n-2; i++){
        int min = i;
        for(int j = i; j<= n -1; j++){
            if(a[j] < a[min]){
                min = j; 
            }
        }
        swap(a[i],a[min]);
    }

    for(int i = 0; i < n; i++){
        cout << a[i]<< endl;
    }
}