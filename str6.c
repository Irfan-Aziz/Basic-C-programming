#include<stdio.h>
#include<string.h>
int main(){
char str1[20],str2[20];
int i,j;
printf("Enter a string\n");
gets(str1);
j=strlen(str1);
for(i=j-1;i>=0;i--){
printf("%c",str1[i]);}}
