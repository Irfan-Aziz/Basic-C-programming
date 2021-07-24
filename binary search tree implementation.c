#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct bstNode{
int data;
struct bstNode* left;
struct bstNode* right;
};
struct bstNode* getNode(int data){
struct bstNode* newNode=(struct bstNode*)malloc(sizeof(struct bstNode));
newNode->data=data;
newNode->left=NULL;
newNode->right=NULL;
return newNode;
}
struct bstNode* insert(struct bstNode* root,int data){
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
return search(root->right,data);
}
int main(){
struct bstNode* root=NULL;
//printf("k\n");
root=insert(root,15);
//printf("k");
root=insert(root,16);
root=insert(root,21);
root=insert(root,14);
root=insert(root,5);
int number;
printf("Enter the number to be searched\n");
scanf("%d",&number);
if(search(root,number)==true)
printf("Found\n");
else
printf("Not found\n");
}
