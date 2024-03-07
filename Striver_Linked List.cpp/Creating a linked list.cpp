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
void lengthoflist(node* &head){
    node* temp = head;
    int count = 0;
    while(temp != nullptr){
        count++;
        temp = temp -> next;
    }
    cout << "Length of linked list is : " << count;
}
void search(node* &head, int x){
    node* temp = head;
    while(temp != nullptr){
        if(temp -> data == x){
            cout << "Present";
            return;
        }
        else{
            temp = temp->next;
        }
    }
    cout << "Not Preset";
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
    lengthoflist(head);
    int x;
    cout<< "Enter the element to search : ";
    cin >> x;
    search(head, x);
    return 0;
}