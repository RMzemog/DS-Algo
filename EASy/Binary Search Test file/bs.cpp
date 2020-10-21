#include<iostream>

using namespace std;


struct node{
    int data; 
    node* left, *right;
    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void printPostorder(struct node* node){
    if (node == NULL){
        return;
    }
    printPostorder(node -> left);
    printPostorder(node -> right);
    cout << node -> data <<" ";
}

void printPreorder(struct node* node){
    if (node == NULL){
        return;
    }
    cout << node -> data << " ";
    printPreorder(node -> left);
    printPreorder(node -> right);
}
void printInorder(struct node* node){
    if (node == NULL){
        return;
    }
    printInorder(node -> left);
    cout << node -> data << " ";
    printInorder(node -> right);
}

struct node* search(struct node* root, int key){
    if (root -> data == key){
        cout << "FOUND ";
        return root;
    }
    if (root -> data < key){
        return search(root -> right, key);
    }
    return search(root -> left, key);
}

int height(node * root){
    if (root == NULL){
        return -1;
    }else{
    int leftt = height(root -> left);
    int rightt = height(root -> right);
    if (leftt > rightt){
        return (leftt + 1);
    }else{return (rightt+1);}
}
}

int top(node* root){
}

int main(){
    node* root = new node(8);
    root -> left = new node(3);
    root -> right = new node(10);
    root -> left -> left = new node(1);
    root -> left -> right = new node(6);
    printPostorder(root);
    cout << endl;
    cout <<"PREORDER "<< endl;
    printPreorder(root);
    cout << endl;
    cout <<"INORDER" << endl;
    printInorder(root);
    cout << endl;
    // cout << "Enter the number you want to search :";
    // int dd;
    // cin >> dd;
    // search(root,dd); 
    cout <<"The height of the tree is :"<< endl;
    cout << height(root);
    return 0;
}