#include<stdio.h>
int main(){
int i=0,j=0,k=0;
char ch;
printf("Enter Characters\n");
while(ch!='\r'){
ch=getch();
switch(ch){
case '1':
case '2':
case '3':
case '4':
case '5':
case '6':
case '7':
case '8':
case '9':
case '0':
i++;
break;
case '!':
case ',':
case '.':
case '/':
case '?':
case ']':
case '=':
case '&':
j++;
break;}}

printf("Digits: %d Punctuations: %d",i,j);}
