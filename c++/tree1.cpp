#include<iostream>
using namespace std;
struct node{
    int val;
    node* right;
    node* left;
    node(data){
        val=data;
        left=NULL;
        rigth=NULL;
    }
};
int current(int inorder[],int start,int end,int val){
 for(int i=start;i<=end;i++){
    if(inorder[i]==val)
    return i;
 }
 return -1;
}

void inordered(node* root){
    if(root==NULL) return ;
    inordered(root->left);
    cout<<root->val<<" ";
    inordered(root->right);
}

node* binarytree(int inorder[],int postorder[],int start,int end){
    if(start>end) return NULL;
    static int idx=4;
    int val=postorder[idx];
    idx--;
    node* cu=new node(val);
    if(start==end)
    return cu;
    int po=current(inorder,start,end,val);

    cu->right =(binarytree(inorder,postorder,po+1,end));
    cu->left = binarytree(inorder,postorder,start,po-1);

    return cu;
}
int main()
{
    int inorder[]={4,2,5,3,1};
    int postorder[]={4,2,1,5,3};

    node* root=binarytree(inorder,postorder,0,4);
    inordered(root);
    return 0;
}