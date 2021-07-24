#include<stdio.h>
int main(){
int i,ans;
for(i=0;i<10;i++){
printf("%d+%d=?\n",i,i);
scanf("%d",&ans);
if(ans==i+i)
printf("Right!");
else{
printf("wrong\n");
printf("The answer is %d",i+i);}}}
