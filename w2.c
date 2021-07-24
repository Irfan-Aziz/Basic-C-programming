#include<stdio.h>
#include<conio.h>
int main(){
char ch;
for(ch=getch();ch!='q';ch=getch()){
printf("%c\n",ch);}
printf("%c is found",ch);
}
