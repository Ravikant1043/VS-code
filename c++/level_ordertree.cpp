#include<iostream>
#include<queue>
using namespace std;
struct node{
    int data;
    struct node* left;
    struct node* right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

int levelsum_at_k(node* root,int k){
    if(root==NULL)
    return -1;
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    int level=0,sum=0;
    while(!q.empty()){
        node* t=q.front();
        t.pop();
        if(t!=null ){
            if(k==level)
            sum+=t->data;
            if(t->left)
            q.push(t->left);
            if(t->right)
            q.push(t->right);
        }
        else if(!q.empty()){
            q.push(NULL);
            level++;
        }
    }
    return sum;
}
void levelorder_traversal(node* root){
    if(root==NULL)
    return ;
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* t=q.front();
        if(t!=NULL){
            cout<<t->data<<" ";
            if(t->left){
                q.push(t->left);
            }
            if(t->right){
                q.push(t->right);
            }
        }
        else if(!q.empty())
        q.push(NULL);
    }
}

int main(){
    return 0;
}