#include<stdio.h>
#include<string.h>
int main(){
char str[100],str1[100];
int i,j,k=0,l=0;
gets(str);
for(i=0;i<strlen(str);i++){
if(str[i]==' '){
for(j=i-1;j>=k;j--){
str1[l]=str[j];
l++;}
str1[l]=' ';
l++;
k=i+1;}
if(i==strlen(str)-1){
 for(j=i;j>=k;j--){
str1[l]=str[j];
l++;}

k=i+1;
}}
str1[l]='\0';
printf(str1);}
