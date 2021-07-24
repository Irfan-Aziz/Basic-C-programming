#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main(){
char str[50];
int i,j=0,k=0;
for(;;){
gets(str);
k=0;
if(!strcmp(str,"*"))
break;
for(i=0;i<strlen(str);i++){
if(str[i]==' '){
if(str[0]==str[i+1]||str[0]==tolower(str[i+1])||str[0]==toupper(str[i+1]))
j++;
else
k++;}}
if(k==0)
printf("Y\n");
else
printf("N\n");}}
