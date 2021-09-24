#include<iostream>
#include<vector>
#include<queue>
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
node* insert(node* root, int data){
    if(root == NULL){
      root  = create(data);
      return root;  
    }else if (data <= root -> data){
        root -> left = insert(root -> left, data);
    }else if (data > root -> data){
        root -> right = insert(root -> right, data); 
    }
    return root;
}

void preorder(node* root){
    if (root == NULL){
        return;
    }
    cout << root -> data<<" ";
    preorder(root -> left);
    preorder(root -> right);
}
void inorder(node* root){
    if(root == NULL){
        return;
    }
    inorder(root -> left);
    cout << root -> data<<" ";
    inorder(root -> right);
}
void postorder(node* root){
    if(root == NULL){
        return;
    }
    postorder(root -> left);
    postorder(root -> right);
    cout << root -> data<<" ";
}
void levelorder(node* root){
    if(root == NULL){
        return;
    }
    queue<node*>Q;
    Q.push(root);
    while(!Q.empty()){
        node * curr = Q.front();
        cout<< curr -> data<<" ";
        if (curr -> left){Q.push(curr -> left);}
        if(curr -> right){Q.push(curr -> right);}
        Q.pop();
    }
}
void postorder_without_recurssion(node* root){
    stack<node*>S;
    stack<node*>SS;
    S.push(root);
    while(!S.empty()){
        node * curr = S.top();
        SS.push(curr);
        S.pop();
        if(curr -> left) S.push(curr -> left);
        if(curr -> right) S.push(curr -> right);
    }
    while(!SS.empty()){
        node* curr2 = SS.top();
        cout <<curr2 -> data<<" ";
        SS.pop();
    }
};

void mirror(node* root){
    if(!root) return;
    mirror(root -> left);
    mirror(root -> right);
    swap(root -> left, root -> right);
}

void preorder_without_recurssion(node* root){
    stack<node*>S;
    S.push(root);
    while(!S.empty()){
        node * curr = S.top();
        cout << curr -> data<<" " ;
        S.pop();
        if(curr -> right)S.push(curr -> right);
        if(curr -> left)S.push(curr -> left);
    }
}
int height(node* root){
    if (root == NULL){
        return 0;
    }else{
        int leftt = height(root -> left);
        int rightt = height(root -> right);
        if (leftt > rightt){
            return (leftt + 1);
        }else{
            return (rightt + 1);
    }
    }
}
void right_view(node* root){
    queue<node*>Q;
    Q.push(root);
    while(!Q.empty()){
        int n = Q.size();
        for(int i = 0; i < n; i++){
            node * curr = Q.front();
            Q.pop();
            if(i == n - 1){
                cout<<curr -> data<<" ";
            }
            if(curr -> left) Q.push(curr -> left);
            if(curr -> right  ) Q.push(curr -> right);
        }
    }
}
void inorder_without_recurssion(node* root){
    stack<node*>S;
    node* curr = root;
    while(curr != NULL || S.empty() == false){
            while(curr != NULL){
                S.push(curr);
                curr = curr -> left;
            }
            curr = S.top();
            S.pop();
            cout << curr -> data<<" ";
            curr = curr -> right;   
    }
}

// void vertical_view(node* root){
//     queue<node*>q;
//     map<int,vector<int>>m;
//     q.push(root);
//     while(!q.empty()){
//         node* curr = q.front();
//         q.pop();

//     }
// }
void top_view(node* root){
    queue<pair<node*,int>>q;
    map<int, int>mp;
    q.push(make_pair(root,0));
    while(!q.empty()){
        int n = q.size();
            node* curr = q.front().first;
            pair<node*,int>p;
            p = q.front();
            q.pop();
            if(!mp[p.second]){
                mp[p.second] = p.first -> data;
            }
            if(curr -> left){
                q.push(make_pair(curr -> left,p.second-1));
            }
            if(curr -> right){
                q.push(make_pair(curr -> right, p.second+1));
            } 
    }
    for(auto it: mp){
        cout<<it.second<<" ";
    }
}

node* lca(node* root, int n1, int n2){
    if(!root) return NULL;
    if(root -> data == n1 or root -> data==n2) return root;
    node* l = lca(root -> left, n1, n2);
    node* r = lca(root -> right, n1, n2);
    if(l and r) return root;
    if(l) return l;
    else return r;
}

void bottom_view(node* root){
    queue<pair<node*, int>>q;
    map<int, int>mp;
    q.push(make_pair(root,0));
    while(!q.empty()){
        int n = q.size();
            node* curr = q.front().first;
            pair<node* , int>p;
            p = q.front();
            q.pop();
            mp[p.second] = p.first -> data;
            if(curr -> left){
                q.push(make_pair(curr -> left, p.second-1));

            }
            if(curr -> right){
                q.push(make_pair(curr -> right, p.second+1));
            }
    }
        for(auto it:mp){
            cout<<it.second<<" ";
        }
}
void zigzag(node* root){
    queue<node*>q;
    q.push(root);
    vector<int>ans;
    int gg = 1;
    while(!q.empty()){
        vector<int>temp;
        int n = q.size();
        for(int i = 0; i < n; i++){
            node* curr = q.front();
            q.pop();
            temp.push_back(curr -> data);
            if(curr -> left){
                q.push(curr -> left);
            }
            if(curr -> right){
                q.push(curr -> right);
            }
        }
        if(gg % 2 == 0){
            reverse(temp.begin(), temp.end());
        }
        for(int i = 0; i < temp.size(); i++){
            ans.push_back(temp[i]);
            }
        gg++;
    }
    for(auto a:ans){
        cout<<a<<" ";
    }
}
int f = 1;
int solve_balance(node* root){
    if(!root) return 0;
    int l = solve_balance(root -> left);
    int r = solve_balance(root -> right);
    if(abs(l - r) > 1) f = 0;
    return max(l,r)+1;
}
bool isbalanced(node * root){
    f = 1;
    solve_balance(root);
    return f;
}

void diagonal(node* root){
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        while(temp){
            if(temp -> left)q.push(temp -> left);
            cout<< temp -> data<<" ";
            temp = temp -> right;
        }
    }
}
void leftt(node* root ,vector<int>&aa){
    if(!root) return;
    if(root -> left){
        // cout<< root -> data<<" ";
        aa.push_back(root -> data);
        leftt(root -> left,aa);
    }else if( root -> right){
        // cout<< root -> data<<" ";
        aa.push_back(root -> data);
        leftt(root -> right,aa);
    }
}
void leaf(node* root,vector<int>&aa){
    if(!root)  return;
    leaf(root -> left,aa);
    if(!root -> left && !root -> right){
        // cout<<root -> data<<" ";
        aa.push_back(root -> data);
    }
    leaf(root -> right,aa);
}
void rightt(node* root, vector<int>&aa){
    if(!root) return;
    if(root -> right){
        rightt(root -> right, aa);
        aa.push_back(root -> data);
    }
}
void boundary(node* root){
    vector<int>aa;
    leftt(root,aa);
    leaf(root,aa);
    rightt(root, aa);
    for(auto it:aa){
        cout<< it<<" ";
    }
}
int binary_to_sum(node* root){
    if(!root) return 0;
    int a = binary_to_sum(root -> left);
    int b = binary_to_sum(root -> right);
    int x = root -> data;
    return a+b+x;
}
int fff = 1;
// int check_sum_tree(node* root){
//     if(!root) return 0;
//     if(!root -> left and !root -> right) return root -> data;
//     if(fff == 0) return 0;
//     int a = check_sum_tree(root -> left)
//     int b = check_sum_tree(root -> right);
//     if(a+b != root -> data) f=0;
//     return a + b + root -> data;
// }

// bool check_leaf_same_level(node* root){
//     queue<node*> q;
//     q.push(root);
//     while(!q.empty()){
//         int n = q.size();
//         int one =0;
//         int two = INT_MAX;
//         for(int i = 0; i < n; i++){
//             node* curr = q.front();
//             if(!curr ->)
//         }
//     }
// }

int main(){
    node* root = NULL;
    vector<int>vec = {25,15,10,4,12,22,18,24,50,35,31,44,70,66,90};
    for(auto a:vec){
        root = insert(root, a);
    }
    cout <<"Inorder Traversal :";
    inorder(root);
    cout << endl << "Preorder Traversal :";
    preorder(root);
    cout << endl << "Postorder Traversal :";
    postorder(root);
    cout << endl << "Levelorder Traversal :";
    levelorder(root);
    cout<<endl <<"Postorder Without recurssion :";
    postorder_without_recurssion(root);
    cout<<endl <<"Preorder Without recurssion :";
    preorder_without_recurssion(root);
    cout<<endl<<"Inorder Without recurssion :";
    inorder_without_recurssion(root);
    cout <<endl<<"Height of the tree is :";
    cout<<height(root);
    cout<<endl<<"Right view of the tree is :";
    right_view(root);
    // cout<<endl<<"Vertical view of the tree is :";
    // cout<<vertical_view(root)
    cout<<endl<<"Top view of the tree is :";
    top_view(root);
    cout<<endl<<"Bottom view of the tree is :";
    bottom_view(root);
    cout<<endl<<"ZigZag view of the tree is :";
    zigzag(root);
    cout<<endl<<"Diagonal view of the tree is :";
    diagonal(root);
    cout<<endl<<"Boundary view of the tree is :";
    boundary(root);

}
