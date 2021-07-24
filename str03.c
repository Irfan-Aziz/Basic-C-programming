#include<stdio.h>
int length(char p[]){
int i,l=0;
for(i=0;p[i]!='\0';i++){
l++;}
return i;}
int main(){
int l;
char min[20];
scanf("%s",min);
l=length(min);
printf("%d\n",l);}
