#include<stdio.h>
#include<string.h>
int main(){
int i,j,k;
char a[100],b[100];
gets(a);
j=0;
for(i=strlen(a)-1;i>=0;i--){
b[j]=a[i];
j++;}
b[j]='\0';
printf(b);}
