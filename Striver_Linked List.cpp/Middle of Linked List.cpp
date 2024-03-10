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
void middleLL(node* &head){
    node* sp = head;
    node* fp = head;
    while(fp != NULL && fp->next != nullptr){
        sp = sp->next;
        fp = fp->next->next;
    }
    head = sp;
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
    middleLL(head);
    cout << "Reversed Linked lIst : ";
    display(head);
}