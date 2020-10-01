#include<iostream>
using namespace std;


struct node {
    int data;
    node* next;
};

node* head = NULL;

void traverse(){
    node* heads = head;
    while (heads != NULL){
        cout << heads -> data<< " --> ";
        heads = heads -> next;
    }
};

void create(int new_data){
    node* new_node = new node();
    new_node -> data = new_data;
    if (head == NULL){
        head = new_node;
    }else{
        node* temp = head;
        while (temp-> next != NULL){
            temp = temp -> next;
        }
        temp -> next = new_node;
    }
};
void delete_node(int index){
    if (index == 1){
        head = head -> next;
    }else{
        node* pre = NULL;
        node* curr = head;
        while (index > 1){
            pre = curr;
            curr = curr -> next;
            index--;
        }
        pre -> next = curr -> next;

    }
}

void delete_node_by_data(int datas){
    if (head -> data == datas){
        head = head -> next;
    }else{
        node* prev = NULL;
        node* curr = head ;
        while (curr -> data != datas){
            prev = curr;
            curr = curr -> next;
        }
        prev -> next = curr -> next;
    }
}

void inserted(int da){
        node* new_n;
        new_n -> data = da;
        new_n -> next = head;
        head = new_n;
    
}
void reverse(){
    node* temp;
    node* prev = NULL;
    node* curr = head;
    while (curr -> next != NULL){
        temp = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = temp;
     }
    head = prev;
}

int main(){
    cout <<"Enter the length of Linked List you want to create.\n";
    int len;
    cin >> len;
    cout <<"Enter the data of the Linked List.\n";
    while (len != 0){
        int dd;
        cin >> dd;
        create(dd);
        len--;
    }
    cout <<"The list you entered is as Follows.\n";
    traverse();
    // cout <<"\nEnter the index of list you want to delete. \n";
    // int del;
    // cin >> del;
    // delete_node(del);
    // traverse();
    // cout <<"\nEnter the data and index of the linked list you want to Enter .\n";
    // int da;
    // int ix;
    // cin >> da;
    // inserted(da);
    // reverse();
    int datas;
    cout << "\n Enter the data of the node you want to delete\n";
    cin >> datas;
    delete_node_by_data(datas);
    traverse();
    

}
