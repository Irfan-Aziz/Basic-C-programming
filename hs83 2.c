#include<stdio.h>
#include<conio.h>
main(){
char ch;
printf("Enter your messeges\n");
ch=getche();
while(ch!='\r'){
printf("%c",ch+1);
ch=getche(); }
return 0;}
