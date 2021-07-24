#include<stdio.h>
int main(){
int i;
char ch;
printf("Enter your letters\n");
for(;;){
ch=getch();
printf("%c\n",ch+32);
if(ch=='\r')
break;}}
