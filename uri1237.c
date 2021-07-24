#include<stdio.h>
#include<string.h>
int main(){
int i,j,k,l,m,n,o,p;
char a[200],b[200];
getchar();
for(;;){
gets(a);
gets(b);
m=0;


for(i=0;i<strlen(a);i++){
for(j=0;j<strlen(b);j++){
if(a[i]==b[j]){
    p=0;
for(k=i,l=j;k<strlen(a),l<strlen(b);k++,l++){
if(a[k]!=b[l])
break;
p++;}

if(p>m)
m=p;}

}}
printf("%d\n",m);

}}
