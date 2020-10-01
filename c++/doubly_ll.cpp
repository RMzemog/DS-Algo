#include<iostream>
using namespace std;
struct node {
    int data;
    node* next;
    node* prev;
};

node* head = NULL;

// void inserthead(int x){
//     node* new_node = new node;
//     new_node -> data = x;
//     new_node -> prev = NULL;
//     new_node -> next = NULL;
//     if (head == NULL){
//         head = new_node;
//         return;
//     }
//     head -> prev = new_node;
//     new_node -> next = head;
//     head = new_node;
// }

void print(){
    node* temp = head; 
    cout <<"Forward :";
    while(temp-> next != NULL){
        cout <<temp -> data<<" --> ";
        temp = temp -> next;
    }
    cout << temp->data;
    cout<<"\n";
    cout <<"Backward: ";
    while (temp -> prev != NULL){
        cout << temp -> data<<" --> ";
        temp = temp -> prev;
    }
    cout<< temp -> data;
}

void delete_by_index(int x){
    node* temp = head;
    if (x == 1){
        head = head -> next;
        head -> prev = NULL;
        return;
    }
    while (x != 1){
        temp = temp -> next;
        x--;
    }
    if (temp -> next == NULL){
        (temp -> prev) -> next = NULL;
        return;
    }
    cout <<temp -> data;
    (temp -> next) -> prev = temp -> prev;
    (temp -> prev) -> next = (temp -> next);
}
void insert_by_index(int x, int place){
   node* new_node = new node;
   new_node -> data = x;
   if (place == 1) {
       new_node -> prev = NULL;
       new_node -> next = head;
       head -> prev = new_node;
       head = new_node;
       return;
   }
   node* temp = head;
   while (place != 1){
       temp = temp -> next;
       place--;
   }
      cout <<temp -> data;
    // if (temp -> next == NULL){

    // }
    (temp -> prev) -> next = new_node;
    new_node -> prev = temp -> prev;
    new_node -> next = temp;
    temp -> prev = new_node;
}

void create(int x){
    node* new_node = new node;
    new_node -> prev = NULL;
    new_node -> next = NULL;
    new_node -> data = x;
    if (head == NULL){
        head = new_node; 
    }else{
        node* temp = head;
        while (temp -> next != NULL){
            temp = temp -> next;
        }
        temp -> next = new_node;
        new_node -> prev = temp;
    }
}
void reverse(){
    node* curr = head;
    node* temp = NULL;
    while(curr != NULL){
        temp = curr -> prev;
        curr -> prev = curr -> next;
        curr -> next = temp;
        curr = curr -> prev;
    }
    head = temp -> prev;

}

int main(){
    int d;
    cout <<"Enter the Length of the Linked list  \n";
    cin >> d;
    while (d != 0){
        int dd;
        cin >> dd;
        create(dd);
        d--;
    }
    print();
    // cout<<"\n Enter the index of the element you want to delete .";
    // int ddd;
    // cin >> ddd;
    // delete_by_index(ddd);
    // int insert,place;
    // cout <<"\nEnter the place of the node.\n";
    // cin >> place;
    // cout <<"Enter the data of the node \n";
    // cin >> insert;
    // insert_by_index(insert, place);
    reverse();
    print();
}
