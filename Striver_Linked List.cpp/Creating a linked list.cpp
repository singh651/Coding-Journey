#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data1) {
            data = data1;
            next = nullptr;
        }
};
void insertnode(node* &head, int data){
    node* newnode = new node(data);
    if(head == nullptr){
        head = newnode;
    }
    else{
        node* temp = head;
        while(temp -> next != nullptr){
            temp = temp->next;
        }
    temp->next = newnode;
    }
}
void displaylinkedlist(node* head){
    node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<< endl;
        temp = temp->next;
    }
}
int main(){
    node* head = nullptr;
    int n;
    cout << "Enter the number of elements : ";
    cin >> n;

    for(int i = 0; i < n; i++){
        int data;
        cin >> data;
        insertnode(head, data);
    }
    cout << "Linked List : ";
    displaylinkedlist(head);
    return 0;
}