#include<stdio.h>
#include<conio.h>
int main(){
char ch;

for(ch=getch();ch!='\r';ch=getch()){
ch=ch-1;
printf("%c",ch);}}
