#include<stdio.h>
#include<string.h>
int main(){
int i,j,k,m,n,x,y,z;
char a[100],b[100];
gets(a);
if(strlen(a)%3==0){
k=0;
for(i=0;i<strlen(a);i++){
if(i%3==0){
if(a[i]!='S')
k++;}
if(i%3==1){
if(a[i]!='O')
k++;}
if(i%3==2){
if(a[i]!='S')
k++;}
}
printf("%d\n",k);}}
