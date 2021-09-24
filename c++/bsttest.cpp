#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<map>
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
void preorder(node* root){
    if(root == NULL){
        return;
    }
    cout << root -> data<<" ";
    preorder(root -> left);
    preorder(root -> right);
}
void postorder(node* root){
    if (root == NULL){
        return;
    }
    postorder(root -> left);
    postorder(root -> right);
    cout << root -> data<<" ";
}
void LevelOrder(node *root){
    if(root == NULL){return;}
    queue<node*>Q;
    Q.push(root);
    while(!Q.empty()){
        node* current = Q.front();
        cout << current -> data<<" ";
        if(current -> left != NULL){Q.push(current -> left);}
        if(current -> right != NULL)Q.push(current -> right);
        Q.pop();
    }
}

void LeftView(node *root){
    if(root == NULL){
        return;
    }
   queue<node*>q;
   q.push(root);
   while(!q.empty()){
       int n = q.size();
       for(int i = 1; i <=n; i++){
           node * temp = q.front();
           q.pop();
           if(i == 1){
               cout << temp -> data <<" ";
           }
           if(temp -> left != NULL){
               q.push(temp -> left);
           }
           if(temp -> right != NULL){
               q.push(temp -> right);
           }
       }
   } 
}

void right_view(node* root){
    if(root == NULL){
        return;
    }
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        for(int i = 1; i <= n; i++){
            node * temp = q.front();
            q.pop();
            if(i==n){
                cout << temp -> data<<" ";
            }
            if(temp -> left != NULL){
                q.push(temp -> left);
            }
            if(temp -> right != NULL){
                q.push(temp -> right);
            }
        }
    }
}
void reverseLevelOrder(node* root){
    stack<node*>S;
    queue<node*>Q;
    Q.push(root);
    while(Q.empty() == false){
        root = Q.front();
        Q.pop();
        S.push(root);
        if(root -> right)
            Q.push(root->right);
        if(root -> left)
            Q.push(root->left);
    }
    while(S.empty() == false){
        root = S.top();
        cout << root -> data <<" ";
        S.pop();
    }
}
int height(node* root){
    if(root == NULL){
        return 0;
    }else{
        int leftt = height(root -> left);
        int rightt = height(root -> right);
        if(leftt > rightt){
            return (leftt+1);
        }else{
            return (rightt+1);
        }
    }
}
int diameter(node* root){
    if (root == NULL){
        return 0;
    }
    int lheight = height(root -> left);
    int rheight = height(root -> right);
    
    int currdiameter = lheight + rheight + 1;

    int ldiameter = diameter(root -> left);
    int rdiameter = diameter(root -> right);
    return max(currdiameter, max(ldiameter, rdiameter));
}

void mirror(node* root){
    if(root == NULL){return;}
    node* temp = root -> left;
    mirror(root -> left);
    mirror(root -> right);
    root -> left = root -> right;
    root -> right = temp;
}

int main(){
    node* root = NULL;
    vector<int>arr = {25,15,10,4,12,22,18,24,50,35,31,44,70,66,90};
    for(int i = 0; i < arr.size(); i++){
        root = insert(root,arr[i]);
    } 
    cout <<"Inorder Traversal :";
    inorder(root);
    cout << endl << "Preorder Traversal :";
    preorder(root);
    cout << endl << "Postorder Traversal :";
    postorder(root);
    cout << endl <<"LevelOrder Traversal :";
    LevelOrder(root);
    cout << endl <<"Reverse LevelOrder Traversal :";
    reverseLevelOrder(root);
    cout << endl <<"Height of the tree is : ";
    cout << height(root);
    cout << endl <<"Diameter of the tree is :";
    cout << diameter(root);
    // cout << endl <<"mirror :";
    // mirror(root);
    // cout <<"Inorder Traversal :";
    // inorder(root);
    cout << endl<<"Left view of the tree is :";
    LeftView(root);
    cout << endl<<"Right View of the tree is :";
    right_view(root);
}