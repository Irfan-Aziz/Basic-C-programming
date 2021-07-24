#include<stdio.h>
#include<string.h>
int main(){
char a[100],b[100];
int i,j,k;
j=0;
gets(a);
for(i=0;i<strlen(a);i++){
if(i==3)
continue;
b[j]=a[i];
j++;}
b[j]='\0';
printf("%s",b);}
