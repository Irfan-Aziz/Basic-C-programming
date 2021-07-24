#include<stdio.h>
int main(){
char ch[80];
int i;
printf("Enter a string\n");
gets(ch);
for(i=0;ch[i];i++){
printf("%c",ch[i]);}}
