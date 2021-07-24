#include<stdio.h>
int main(){
int i,j;
char ch[80];
for(i=0;i<80;i++){
ch[i]=getch();
if(ch[i]=='\r')
break;}
for(i=0;ch[i]!='\r';i++){
printf("%c\n",ch[i]);}}
