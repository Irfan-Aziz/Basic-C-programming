#include<stdio.h>
int main(){
int i;
for(;;){
scanf("%d",&i);
if(i>0)
printf("positive\n");
else if(i<0)
printf("negative\n");
else
printf("zero\n");
if(i==100)
break;}}
