#include<stdio.h>
int main(){
int n=5,i;
char d[]="AZIZ";
printf("%s\n",d);
for(i=0;i<n;i++){
if(d[i]>='A'&&d[i]<='Z'){
d[i]='a'+(d[i]-'A');}}
printf("%s\n",d);}
