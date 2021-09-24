#include<iostream>
#include<vector>
#include<stack>
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
};

node* create(int data){
    node* new_node = new node();
    new_node -> data = data;
    return new_node;
}

void solve(node* root, node* & head, node* & prev, int &f){
    if(!root) return ;
    solve(root -> left, head, prev, f);
    if(f==0){
        f = 1;
        head = root;
        prev = root;
    }else{
        prev -> right = root;
        prev -> right -> left = prev;
        prev = prev -> right;
    }
    solve(root -> right, head, prev, f);
}

node* ma(node* root){
    node* root = create(10);
    root -> left = create(12);
    root -> left -> left = create(25);
    root -> right = create(15);
    root -> left -> left = create(25);
    root -> left -> right = create(30);
    root -> right -> left = create(36);
    node* head = NULL;
    node* prev = NULL;
    int f = 0;
    solve(root, head, prev, f);
    return head;
}