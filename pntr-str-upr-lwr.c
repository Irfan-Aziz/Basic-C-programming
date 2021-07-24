#include<stdio.h>
#include<ctype.h>
int main(){
char str[20],*p;
int i;
printf("Enter a string\n");
gets(str);
p=str;
while(*p){
*p=toupper(*p);
p++;}
printf("%s\n",str);
 p=str;
while(*p){
*p=tolower(*p);
p++;}
printf("%s",str);}
