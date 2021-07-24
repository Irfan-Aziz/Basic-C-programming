#include<stdio.h>
int main(){
int i,j,k,a,b,c;
while(scanf("%d",&a)!=EOF){
c=0;

for(i=0;i<a;i++){
scanf("%d",&b);
if(b>c){
c=b;}}
if(c<10)
printf("1\n");
else if(c>=10&&c<20)
printf("2\n");
else if(c>=20)
printf("3\n");}}
