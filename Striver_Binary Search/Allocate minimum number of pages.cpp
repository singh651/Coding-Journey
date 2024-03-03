#include<bits/stdc++.h>
using namespace std;
int noofstudent(int a[1000], int mid, int n){
    int students = 1; int studentpages = 0;
    for(int i = 0; i < n; i++){
        if((a[i] + studentpages) <= mid){
            studentpages += a[i];
        }
        else{
            students += 1;
            studentpages = a[i];
        }
    }
    return students;
}
int main(){
    int a[1000],n;
    cout << "Enter the number of elements : ";
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int sumofel = 0;
    int maxi = INT_MIN;
    for(int i = 0; i < n; i++){
        maxi = max(maxi, a[i]);
    }
    for(int i = 0; i < n; i++){
        sumofel = sumofel + a[i];
    }
    int low = maxi;
    int high = sumofel;

    
    int noofstud;
    cout << "Enter number of students :";
    cin >> noofstud;
    while(low <= high){
        int mid = (low + high)/2;
        int stude = noofstudent(a,mid,n);
        if(stude > noofstud){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    cout << low;
}