#include<stdio.h>
#include<conio.h>
int main(){
char mess[80];
int i;
printf("Enter your messege\n");
for(i=0;i<80;i++){
mess[i]=getche();
if(mess[i]=='\r')
break;}
printf("\n");
for(i=0;mess[i]!='\r';i++){
printf("%c",mess[i]);}
return 0;}
