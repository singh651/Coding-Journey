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

void insertnode(node* &head, int data){
    node* newnode = new node(data);
    if(head == nullptr){
        head = newnode;
    }
    else{
        node* temp = head;
        while (temp-> next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }   
}
void insertathead(node* &head, int x){
    node* newnode = new node(x);
    newnode->next = head;
    head = newnode;
}

void display(node* &head){
    node* temp = head;
    while(temp != nullptr){
        cout<< temp->data;
        temp = temp -> next;
    }
}

int main(){
    node* head = nullptr;
    int n;
    cout << "Enter the no of elements : ";
    cin >> n;
    for(int i = 0; i < n; i++){
        int val;
        cin >> val;
        insertnode(head, val);
    }
    int x;
    cout << "Enter the new value : ";
    cin >> x;
    insertathead(head,x);
    display(head);
}