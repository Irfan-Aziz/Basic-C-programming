#include<stdio.h>
#include<stdlib.h>
struct bin_tree{
int data;
struct bin_tree*right,*left,*parent;
};
typedef struct bin_tree node;
void insert(node *tree,int val){
node *temp=NULL;
if(!(tree)){
temp=(node*)malloc(sizeof(node));
temp->left=temp->right=NULL;
temp->parent=tree;
temp->data=val;
tree=temp;
return;
}
if(val<tree->data){
insert(&( tree)->left,val);}
else if(val>tree->data){
insert(& tree->right,val);}
 }
 void print_preorder(node *tree){
 if(tree){
 printf("root\t left\t right\t\n");
 printf("%d\t %d\t %d\t\n",tree->data,tree->left,tree->right);
 print_preorder(tree->left);
 print_preorder(tree->right);
 }
 }
 node*search(node*tree,int val){
 if(!(tree)){
 return NULL;
 }
 if(val<tree->data){
 search(&(tree->left),val);
 }
 else if(val>tree->data){
 search(&(tree->right),val);
 }
 else if(val==tree->data){
 return tree;
 }
 }
 void main(){
 int a,i;
 node*root;
 node*tmp;
 root=NULL;
 for(i=0;i<7;i++){
 scanf("%d",&a);
 insert(&root,a);}
 printf("preorder display\n");
 print_preorder(root);
 printf("Enter data to search...:");
 scanf("%d",&a);
 tmp=search(&root,a);
 if(tmp){
 printf("searched node=%d\n",tmp->data);
 }
 else{
 printf("data are not found in tree...!\n");
 }
 }
