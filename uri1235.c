#include<stdio.h>
#include<string.h>
int main(){
int i,j,k,l,m,n;
char a[100],b[100];
scanf("%d",&n);
getchar();
for(m=0;m<n;m++){
gets(a);
k=strlen(a);
if(k%2==0){
j=0;
for(i=k/2-1;i>=0;i--){
b[j]=a[i];
j++;}
for(i=k-1;i>k/2-1;i--){
b[j]=a[i];
j++;}}
else if(k%2==1){
j=0;
for(i=k/2;i>=0;i--){
b[j]=a[i];
j++;}
for(i=k-1;i>k/2;i--){
b[j]=a[i];
j++;}}
b[j]='\0';
printf(b);
printf("\n");
}}
