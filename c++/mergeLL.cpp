#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
};
node* head1 = NULL;
node* head2 = NULL;
void create1(int d1){
    node* new_node = new node() ;
    new_node -> data = d1;
    if (head1 == NULL){
        head1 = new_node;
    }else{
        node* temp = head1;
        while (temp -> next != NULL){
            temp = temp -> next;
        }
        temp -> next = new_node;
    }
}


void create2(int d2){
    node* new_node = new node();
    new_node -> data = d2;
    if (head2 == NULL){
        head2 = new_node;
    }else{
        node* temp = head2;
        while (temp -> next != NULL){
            temp = temp -> next;
        }
        temp -> next = new_node;
    }
}

void merge(){

}

void traverse(node* head){
    node* temp = head;
    while (temp -> next != NULL){
        cout << temp -> data<< " --> ";
        temp = temp -> next;
    }
        cout << temp -> data;
}


int main(){
    cout << "Enter length of  your first sorted LINKED LIST\n";
    int first;
    cin >> first;
    cout << "Enter the data of the linked list \n";
    while (first > 0){
        int firstt;
        cin >> firstt;
        create1(firstt);
        first--;
    }
    traverse(head1);
    cout << "\nEnter length of  your second sorted LINKED LIST\n";
    int second;
    cin >> second;
    cout << "Enter the data of the linked list \n";
    while (second > 0){
        int first2;
        cin >> first2;
        create2(first2);
        second--;
    }
    traverse(head2);
    merge();
    traverse(head1);

}