#include<stdio.h>
#include<math.h>
int main(){
int i,j,k,a,b=0,c=0;
char str[20];
for(;b!=3;){


gets(str);
if(!strcmp(str,"caw caw")){
printf("%d\n",c);
c=0;
b++;}

else{for(j=2;j>=0;j--){
if(str[j]=='*')
c=c+pow(2,j);
else if(str[j]=='-'){
continue;
}
}}}}
