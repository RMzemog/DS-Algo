#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
    node* prev;
};
node* head = NULL;
void create(int x){
    node* new_node = new node;
    new_node -> prev = NULL;
    new_node -> next = NULL;
    new_node -> data = x;
    if (head==NULL){
        head = new_node;
    }else{
        node* temp = head;
        while(temp-> next != NULL){
            temp = temp -> next;
        }
        temp -> next = new_node;
        new_node -> prev = temp;
    }
}
void traverse(){
    node* shampa = head;
    cout << "Forward : ";
    while(shampa -> next != NULL){
        cout << shampa -> data<<" --> ";
        shampa = shampa -> next;
    }cout << shampa -> data<<endl;
    cout <<"Backward : ";
    while(shampa -> prev!= NULL){
        cout << shampa -> data <<" --> ";
        shampa = shampa -> prev;
    }cout << shampa -> data;
}
void ghusao(int pata, int parcel){
    node* new_node = new node;
    new_node -> data = parcel;
    if(pata = 1){
        new_node -> prev = NULL;
        new_node -> next = head;
        head -> prev = new_node;
        head = new_node;
        return;
    }
    node* temp = head;
    while(pata != 1){
        temp = temp -> next;
        pata--;
    }
    
}
int main(){
    int d;
    cout <<"Enter the Length of the Linkes list \n";
    cin >> d;
    while(d--){
        int dd;
        cin >> dd;
        create(dd);
    }
    traverse();
    cout << endl;
    int gh;
    cout <<"Enter the element you want to enter ";
    cin >> gh;
    int hg;
    cout <<"Enter the position :";
    cin >> hg;
    ghusao(hg,gh);
}