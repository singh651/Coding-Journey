#include<bits/stdc++.h>
using namespace std;



void print_array(int arr[], int n){
    for(int i =0; i<n; i++){
        cout<<arr[i] << endl;
    }
} 

void reverse(int arr[],int start, int end)
{
    if(start<end){
    swap(arr[start],arr[end]);
    reverse(arr, start+1, end-1);
    }
    else return;
}





int main(){
    int arr[1000], n;
    cout << "Enter the number of elements : ";
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    reverse(arr,0,n-1);
    print_array(arr,n);
}


vector<int> reverseArray(int n, vector<int> &nums)

{

vector<int>result;

int j = n-1;

for(int p=0; p<n; p++){

result.push_back(nums[j]);

j--;

}

return result;

 

}