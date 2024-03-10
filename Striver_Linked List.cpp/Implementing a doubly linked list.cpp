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
    cout << endl;
}

void deletehead(node* &head){
    node* prev = head;
    head = head-> next;
    head->prev = nullptr;
    delete prev;
}

void deletetail(node* &head){
    node* tail = head;
    while (tail->next != nullptr)
    {
        tail = tail -> next;
    }
    node* newtail = tail->prev;
    newtail->next = nullptr;
    delete tail;
}

void deletekthindex(node* &head, int k) {
    node* kindex = head;
    int count = 0;
    
    // Traverse to the k-th index
    while (kindex != nullptr && count < k) {
        count++;
        if (count == k) {
            break;
        }
        kindex = kindex->next;
    }
    
    // If k-th index node is not found
    if (kindex == nullptr) {
        cout << "Node at index " << k << " does not exist.\n";
        return;
    }

    node* back = kindex->prev;
    node* front = kindex->next;

    // If the k-th node is the head
    if (back == nullptr) {
        deletehead(head);
        return;
    }
    
    // If the k-th node is the tail
    if (front == nullptr) {
        deletetail(head);
        return;
    }

    // Adjust pointers to delete the k-th node
    back->next = front;
    front->prev = back;
    kindex->prev = nullptr;
    kindex->next = nullptr;
    delete kindex;
}

void insertathead(node* &head, int y){
    node* newnode = new node(y);
    head->prev = newnode;
    newnode->next = head;
    head = newnode;
}

void insertattail(node* &head, int z){
    node* current = head;
    node* newnode = new node(z);
    while(current->next != nullptr){
        current = current->next;
    }
    current->next = newnode;
    newnode->prev = current;
}

void insertatk(node* &head, int w, int z){
    node* newnode = new node(z);
    node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        if(count == w){
            break;
        }
        temp = temp-> next;
    }
    newnode->prev = temp;
    newnode->next = temp->next;
    temp->next->prev = newnode;
    temp->next = newnode;

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
    deletehead(head);
    cout << "Updated Linked List ";
    display(head);
    deletetail(head);
    cout << "Again Updated : ";
    display(head);
    int k;
    cout << "Enter the kth element to delete : ";
    cin >> k;
    deletekthindex(head,k);
    display(head);
    int y;
    cout<< "Enter the element to insert : ";
    cin >> y;
    insertathead(head,y);
    display(head);
    int z;
    cout << "Enter the element to insert at tail : ";
    cin >> z;
    insertattail(head, z);
    cout << "Updated LL : ";
    display(head);
    int w;
    cout << "Enter the node where to insert : ";
    cin >> w;
    int m;
    cout<< "Enter what to insert : ";
    cin >> m;
    insertatk(head,w,m);
    display(head);
}