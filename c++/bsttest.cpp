#include<iostream>
using namespace std;

struct node{
    int data;
    node* right;
    node* left;
};

node* create(int data){
    node* newNode = new node();
    newNode -> data = data;
    return newNode;
}

node* insert(node* root, int data){
    if (root == NULL){
        root = create(data);
        return root;
    }else if(data <= root -> data){
        root -> left = insert(root -> left, data);
    }else if (data > root -> data){
        root -> right = insert(root -> right, data);
    }
    return root;
}
void inorder(node* root){
    if (root == NULL){
        return;
    }
    inorder(root -> left);
    cout << root -> data<<" ";
    inorder(root -> right);
}

int main(){
    node* root = NULL;
    root = insert(root, 15);
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 12);
    root = insert(root, 13);
    cout <<"Inorder Traversal :";
    inorder(root);
}