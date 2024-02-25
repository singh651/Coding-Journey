#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[1000][1000];
    int n, m;
    cout << "Enter the number of rows : ";
    cin >> n;
    cout << "Enter the number of columns : ";
    cin >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    for(int i = 0; i <= n-2; i++){
        for(int j = i+1; j <= n-1 ; j++){
            swap(a[i][j], a[j][i]);
        }
    }
    for(int i = 0; i < n; i++){
        reverse(a[i], a[i] + m);
    }

    cout << "Rotated Matrix : ";

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    

}