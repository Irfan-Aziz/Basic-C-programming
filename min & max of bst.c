#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct bstNode{
int data;
struct bstNode* left;
struct bstNode* right;
};
int FindMin(struct bstNode*root){
if(root==NULL){
    printf("Tree is empty\n");
    return -1;
}
while(root->left!=NULL){
    root=root->left;
}
return root->data;
}
int FindMax(struct bstNode*root){
if(root==NULL){
    printf("Tree is empty\n");
    return -1;
}
/*
//iterative method
while(root->right!=NULL){
    root=root->right;
}
return root->data;*/
//recurssive method
else if(root->right==NULL){
    return root->data;
    }
    return FindMax(root->right);
}

struct bstNode* getNode(int data){
struct bstNode* newNode=(struct bstNode*)malloc(sizeof(struct bstNode));
newNode->data=data;
newNode->left=NULL;
newNode->right=NULL;
return newNode;
}
struct bstNode* insert(struct bstNode*root,int data){
if(root==NULL){
root=getNode(data);
}
else if(data<=root->data){
root->left=insert(root->left,data);}
else{
root->right=insert(root->right,data);}
return root;
}
bool search(struct bstNode* root,int data){
if(root==NULL)
return false;
else if(root->data==data)
return true;
else if(data<=root->data)
return search(root->left,data);
else
return search(root->right,data);}
int main(){
struct bstNode* root=NULL;
root=insert(root,15);
root=insert(root,2);
root=insert(root,19);
root=insert(root,11);
root=insert(root,15);
root=insert(root,4);

/*int number;
printf("Enter the number to be searched\n");
scanf("%d",&number);
if(search(root,number)==true){
printf("Found\n");}
else
printf("Not found\n");*/
printf("Minimum number %d\n",FindMin(root));
printf("Maximum number %d\n",FindMax(root));
}
