#include<stdio.h>
int main(){
int i,j,k,p,n1,n2,ch,set1[10],set2[10],set3[20],flag;
char wish;

do{
printf("Press 1 for Union\n");
printf("\npress 2 for intersection\n");
printf("\npress 3 for substraction\n");
printf("Enter your choice\n");
scanf("%d",&ch);
switch(ch){
case 1:
printf("enter the size of set1\n");
scanf("%d",&n1);
printf("\nEnter the element of set1\n");
for(i=0;i<n1;i++){
scanf("%d",&set1[i]);}
printf("Enter the size of set2\n");
scanf("%d",&n2);
printf("\nEnter the elements of set2\n");
for(i=0;i<n2;i++){
scanf("%d",&set2[i]);}
k=0;
for(i=0;i<n1;i++){
set3[k]=set1[i];
k++;
}
for(i=0;i<n2;i++){
flag=1;
for(j=0;j<n2;j++){
if(set2[i]==set2[j]){
flag=0;
break;}}
if(flag==1){
set3[k]=set2[i];
k++;
}}
p=k;
for(k=0;k<p;k++){
printf("%d",set3[k]);}
break;
case 2:
printf("\nenter the size of set1\n");
scanf("%d",&n1);
printf("\nEnter the elements of set1\n");
for(i=0;i<n1;i++){
scanf("%d",&set1[i]);}
printf("Enter the size of set2\n");
scanf("%d",&n2);
printf("Enter the size of set2");
for(i=0;i<n2;i++){
scanf("%d",&set2[i]);}
k=0;
for(i=0;i<n2;i++){
flag=1;
for(j=0;j<n2;j++){
if(set2[i]==set1[j]){
flag=0;
break;
}}
if(flag==0){
set3[k]=set2[i];
k++;}}
p=k;
for(k=0;k<p;k++){
printf("%d",set3[k]);
}
break;
case 3:
printf("\nEnter the size of set1\n");
scanf("%d",&n1);
printf("\nEnter the elements of set1\n");
for(i=0;i<n1;i++){
scanf("%d",&set2[i]);}
printf("\nEnter the size of n2\n");
scanf("%d",&n2);
printf("Enter the elements of set2\n");
for(i=0;i<n2;i++){
scanf("%d",&set2[i]);
}
k=0;
for(i=0;i<n1;i++){
flag=1;
for(j=0;j<n2;j++){
if(set1[i]==set2[j])
flag=0;
break;
}


if(flag==1){
set3[k]=set1[i];
k++;
}
}
p=k;
for(k=0;k<p;k++){
printf("%d",set3[k]);
}
break;}
printf("\nWant to continue?\n");

scanf("%c",&wish);
}while(wish!='n');
}
