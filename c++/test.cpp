#include<iostream>
using namespace std;
struct node{
    int data;
    node* prev;
    node* next;
};
node* head= NULL;
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
};

void insert(int data){
    node* new_node = new node();
    new_node -> data = data;
    if ( head -> data >= data){
        head -> prev = new_node;
        new_node -> next = head;
        head = new_node;
    }else{
        node* curr = head;
        node* prev = NULL;
        while(curr && curr -> data < data){
            prev = curr;
            curr = curr -> next;
        }
        cout <<prev -> data;
        if(curr == NULL){
            prev -> next = new_node;
            new_node -> prev = prev;
        }
        else{
            prev -> next = new_node;
            new_node -> next = curr;
            curr -> prev = new_node; 
            new_node -> prev = prev;
    }
    }

}

void print(){
    node* temp = head; 
    cout <<"Forward :";
    while(temp -> next != NULL){
        cout <<temp -> data<<" --> ";
        temp = temp -> next;
    }
    cout << temp -> data;
    cout<<"\n";
    cout <<"Backward: ";
    while (temp -> prev != NULL){
        cout << temp -> data<<" --> ";
        temp = temp -> prev;
    }
    cout<< temp -> data;
}
void del(int data){
    if (head -> data == data){
        head = head -> next;
        head -> prev = NULL;
    }else{
        node* curr = head;
        node* prev = NULL;
        while(curr -> data != data){
            prev = curr;
            curr = curr -> next;
        }
        prev -> next = curr -> next;
        (curr -> next) -> prev = prev;
        curr -> next = NULL;
        curr -> prev = NULL;    
    }
}

void reverse(){
    
}

int main(){
    int c;
    cout <<"Length ";
    cin >>c;
    while(c--){
        int temp;
        cin >> temp;
        create(temp);
    }
    print();
    // cout << "\nData you want to enter in LL :";
    // int ll;
    // cin >>ll;
    // insert(ll);
    // print();
    // cout <<"\nEnter the element you want to delete :";
    // int as;
    // cin >> as;
    // del(as);
    // print();
    reverse();
}