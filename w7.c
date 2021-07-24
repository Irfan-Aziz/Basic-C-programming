#include<stdio.h>
int main(){
char a,b,ch;
for(ch=getch();ch!='\r';ch=getch()){
ch=ch+1;
printf("%d %c",ch,ch);}}
