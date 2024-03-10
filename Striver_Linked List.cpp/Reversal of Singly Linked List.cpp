#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = nullptr;
    }

};

void insertnode(node* &head, int val){
    node* newnode = new node(val);
    if(head == nullptr){
        head = newnode;
    }
    else{
        node* temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

void display(node* &head){
    node* temp = head;
    while (temp != NULL)
    {
        cout << temp->data << ' ';
        temp = temp->next;
    }
    cout << endl;
}

void reverse(node* &head){
    node* current = head;
    node* prev = NULL;
    while (current != nullptr)
    {
        node* front = current->next;
        current->next = prev;
        prev = current;
        current = front;
    }
    head = prev;
}


int main(){
    int n;
    cout << "Enter the no of elements : ";
    cin >> n;
    int val;
    node* head = nullptr;
    for(int i = 0; i < n; i++){
        cin >> val;
        insertnode(head, val);
    }
    cout << "Linked List : ";
    display(head);
    reverse(head);
    cout << "Reversed Linked lIst : ";
    display(head);
}