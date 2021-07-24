#include<stdio.h>
#include<stdlib.h>
#define MAX 5
void insrt(int);
void deleete(int);
void create();
void check(int);
void display();
int a[MAX];
int f,r;
void main(){
int c, ch;
printf("\n1-Insert an element");
printf("\n2-Delete an element");
printf("\n3-Display the element");
create();
while(1){
printf("\nEnter your choice");
scanf("%d",&ch);
switch(ch){
case 1:
printf("\nEnter value");
scanf("%d",&c);

 insrt(c);
break;
case 2:
printf("\nDelete value");
scanf("%d",&c);
 deleete(c);
break;
case 3:
 display();
break;
}}
void create(){
f=r=-1;}
void insrt(int data){
if(r>=MAX-1){
printf("\nOverflow");
return;}
if((f==-1)&&(r==-1)){
f++;
r++;
a[r]=data;
return;
}
else
check(data);
r++;
}
void check(int data){
int i,j;
for(i=0;i<=r;i++){
if(data>=a[i]){
for(j=r+1;j>i;j--){
a[j]=a[j-1];}
return;}}
a[i]=data;}
void deleete(int data){
int i;
if((f==-1)&&(r==-1)){
printf("\nEmpty");
return;}
for(i=0;i<=r;i++){
if(data==a[i]){
for(;i<r;i++){
a[i]=a[i+1];}
//a[i]==-99;
r--;
if(r==-1){
f=-1;
return;}}}
printf("\nNot found");}
void display(){
if((f==-1)&&(r==-1)){
printf("\nQueue is empty");
return;}
for(;f<=r;f++){
printf("%d",a[f]);}
f=0;}
}
