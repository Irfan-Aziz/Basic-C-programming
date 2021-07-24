#include<stdio.h>
main(){
int i,a,num;
scanf("%d",&num);
printf("Guess the magic number\n");
for(i=0;i<10;i++){
scanf("%d",&a);
if(num==a){
printf("right\n");break;}
else if(num!=a){
printf("Try again\n");}}
printf("The number is %d",num);}
