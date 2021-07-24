#include<stdio.h>
#include<string.h>
int main(){
int i,j,k,l,m,n,o,p;
char a[1005],b[1005];
scanf("%d",&n);
getchar();
for(i=0;i<n;i++){
gets(a);
gets(b);
o=strlen(a);
p=strlen(b);
if(o<p){
printf("nao encaixa\n");}
else{
o--;
for(j=strlen(b)-1;j>=0;j--,o--){
if(a[o]!=b[j]){
printf("nao encaixa\n");
break;}
if(j==0)
printf("encaixa\n");}
}}}
