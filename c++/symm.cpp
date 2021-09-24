// #include<iostream>
// #include<vector>
// #include<queue>
// #include<stack>
// #include<map>
// using namespace std;

// struct node{
//     int data;
//     node* right;
//     node* left;
// };

// node* create(int data){
//     node* newNode = new node();
//     newNode -> data = data;
//     return newNode;
// }

// node* insert(node* root, int data){
//     if (root == NULL){
//         root = create(data);
//         return root;
//     }else if(data <= root -> data){
//         root -> left = insert(root -> left, data);
//     }else if (data > root -> data){
//         root -> right = insert(root -> right, data);
//     }
//     return root;
// }
// void inorder(node* root){
//     if (root == NULL){
//         return;
//     }
//     inorder(root -> left);
//     cout << root -> data<<" ";
//     inorder(root -> right);
// }


// int main(){
//     node* root = NULL;
//     vector<int>arr = {25,15,10,4,12,22,18,24,50,35,31,44,70,66,90};
//     for(int i = 0; i < arr.size(); i++){
//         root = insert(root,arr[i]);
//     } 
//     cout <<"Inorder Traversal :";
//     inorder(root);

#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<pair<int,int>>time;
    for(int i = 0; i < n; i++){
        int a,b;
        cin >> a>> b;
        time.push_back(make_pair(a+b,i+1));
    }
    sort(time.begin(), time.end());
    for(int i = 0; i < n; i++){
        cout <<time[i].second<<" ";
    }
}