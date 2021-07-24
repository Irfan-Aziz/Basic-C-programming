#include<stdio.h>
main(){
int answer,count,right,chances;
for(count=0;count<11;count++){
printf("What is %d+%d?",count,count);
scanf("%d",&answer);}
if(answer==count+count){
printf("Right!");}
else{
printf("Wrong! Try Again");
for(chances=0;chances<3;chances++){
printf("What is %d+%d?",count,count);
scanf("%d",&answer);
if(answer==count+count){
printf("Right!");}}
if(!right){
printf("The answer is %d+%d",count,count);}}}
