#include<iostream>
using namespace std;


struct node{
    int data;
    node* left;
    node* right;
};


void inorder(node* root){
    if (root == NULL){
        return;
    }
    inorder(root -> left);
    cout << root -> data<<" ";
    inorder(root -> right);
}

void postorder(node* root){
    if (root == NULL){
        return;
    }
    postorder(root -> left);
    postorder(root -> right);
    cout << root -> data<<" ";
}

void preorder(node* root){
    if (root == NULL){
        return;
    }
    cout << root -> data <<" ";
    preorder(root -> left);
    preorder(root -> right);
}
node* create(int data){
    node* newNode = new node();
    newNode -> data = data;
    return newNode;}
node* insert(node* root, int data){
    // node* newNode = new node;
    // newNode -> data = data;
    if (root == NULL){
        root = create(data);
        return root;
    }else if (data <= root -> data){
        root -> left = insert(root -> left, data);
    }else if (data > root -> data){
        root -> right = insert(root -> right, data);
    }
    return root;
}

bool search(node* root, int data){
    if (root == NULL){
        return false;
    }else if(root -> data == data){
        return true;
    }else if (root -> data >= data){
        return search(root -> left , data);
    }else{
        return search(root -> right, data);
    }
}

int main(){
node* root = NULL;
root = insert(root, 15);
root = insert(root, 10);
root = insert(root, 20);
root = insert(root, 12);
cout << "Inorder Traversal :";
inorder(root);
cout << endl;
cout <<"Postoder Traversal : ";
postorder(root);
cout <<endl;
cout <<"Preoder Traversal : ";
preorder(root);
cout <<endl;
cout <<"Enter the Number you want to Search : ";
int nn;
cin >> nn;
if (search(root, nn) == true){
    cout << "Found";
}else{cout << "Not Found";}
}