#include<stdio.h>
int main(){
int i,j,k;
for(i=0;i<10;i++){
printf("What is %d+%d\n",i,i);
scanf("%d",&j);
if(j==i+i){
printf("right\n");}
else{
printf("Wrong\n");
k=0;
for(k=0;k<2;k++){
printf("Try again\n");
scanf("%d",&j);
if(j!=i+i&&k<1){
continue;}
else if(j!=i+i&&k==1){
printf("The right answer is %d\n",i+i);}
else
printf("right\n");
break;
}}}}
