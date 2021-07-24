#include<stdio.h>
#include<conio.h>
int main(){
char ch;
printf("Enter the letter");
ch=getche();
switch(ch){
case'a':
case'e':
case'i':
case'o':
case'u':
printf("vowel\n");
break;
default:
printf("consonant");}
return 0;}
