#include<iostream>
#include<stack>
#include<vector>
using namespace std;

struct node{
    int data;
    node* right;
    node* left;
};

node* create(int data){
    node* new_node = new node();
    new_node -> data = data;
    return new_node;
}

int findIndex(string str, int si, int ei){
    if(si > ei)
        return -1;
    stack<char>s;
    for(int i = si; i <= ei; i++){
        if(str[i] =='(')
            s.push(str[i]);
        else if(str[i] == ')'){
            if(s.top() == '('){
                s.pop();

                if(s.empty()) return i;
            }
        }
    }
    return -1;
}
node* treeFromString(string str,int si, int ei){
    if(si > ei){
        return NULL;
    }
    node* root = create(str[si] - '0');
    int index = -1;
    if(si+1 <=ei && str[si + 1] == '(')
        index = findIndex(str, si+1, ei);
    if(index != -1){
        root -> left = treeFromString(str, si+2, index-1);
        root -> right = treeFromString(str, index+2, ei- 1);
    }
}

int main(){
    string s;
    cin >> s;
    node* root = NULL;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '('){

        }else if (s[i] == ')'){

        }else{

        }
    }
}