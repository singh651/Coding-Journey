#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;

    node(int val){
        data = val;
        next = nullptr;
    }
};
void display(node* &head){
    node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void arrtoll(int arr[], int n,node* &head){
    node* mover = head;
    for(int i = 1; i < n; i++){
        node* temp = new node(arr[i]);
        mover -> next = temp;
        mover = temp;
    }
}

int main(){
    int arr[1000],n;
    cout << "Enter the number of elements in the array  : ";
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    node* head = new node(arr[0]);
    arrtoll(arr, n, head);
    display(head);

}