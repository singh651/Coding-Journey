#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
    node* prev;

    node(int val){
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

void insertnode(node* &head, int val){
    node* newnode = new node(val);
    if(head == nullptr){
        head = newnode;
    }

     
    else{
        node* current = head;
        while(current->next != nullptr){
            current = current -> next;
        }
        current->next = newnode;
        newnode->prev = current;
    }
}

void display(node* &head){
    node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main(){
    node* head = nullptr;
    int arr[1000],n;
    cout << "Enter the number of elements : ";
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        insertnode(head, arr[i]);
    }
    
    cout << "Displaying Linked List : ";
    display(head);
}