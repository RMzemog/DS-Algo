#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
};
map<int, int>mp;
int idx = 0;
node* create(int data){
    node* new_node = new node();
    new_node -> data = data;
    return new_node;
}

node* solve(vector<int>pre, vector<int>in, int start, int end){
    if(start > end) return NULL;
    node* res = new node(pre[idx++]);
    // res -> data = pre[idx++];
    if(start == end) return res;
    int mid = mp[res-> data];
    res -> left = solve(pre, in, start, mid-1);
    res -> right = solve(pre, in , mid+1, end);
    return res;    
}

node* buildTree(vector<int>in, vector<int>pre, int n){
    idx = 0;
    for(int i = 0; i < n; i++){
        mp[in[i]] = i;
    }
    node* root = solve(pre, in, 0, n-1);
    return root;
}
void postorder(node* root){
    if(root == NULL){
        return ;
    }
    postorder(root -> left);
    postorder(root -> right);
    cout<<root -> data<<" ";
}
int main(){
    int n = 6;
    vector<int>preorder = {25, 15, 10, 4, 12, 22, 18, 24, 50, 35, 31, 44, 70, 66, 90};
    vector<int>inorder = {4, 10, 12, 15, 18, 22, 24, 25, 31, 35, 44, 50, 66, 70, 90};
    node * root = buildTree(inorder,preorder, n);
    postorder(root);
}