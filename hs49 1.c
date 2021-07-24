#include<stdio.h>
main(){
int a,b,choice;
scanf("%d %d",&a,&b);
printf("Press 1 for add,2 for substract");
scanf("%d",&choice);
if(choice==1){
printf("%d",a+b);}
else if(choice==2){
printf("%d",a-b);}}
