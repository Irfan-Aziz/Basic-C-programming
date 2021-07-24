#include<stdio.h>
#include<string.h>
int main(){
char a[100];
int i,j,g=0,b=0,c=0,d=0,e=0,f=0;
gets(a);
for(i=0;i<strlen(a);i++){
if(a[i]=='(')
g++;
if(a[i]==')')
b++;
if(a[i]=='{')
c++;
if(a[i]=='}')
d++;
if(a[i]=='[')
e++;
if(a[i]==']')
f++;}
if(g==b&&c==d&&e==f){
printf("balanced\n");}
else
printf("unbalanced\n");}
