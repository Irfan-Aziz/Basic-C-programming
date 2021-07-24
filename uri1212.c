#include<stdio.h>
int main(){
int a,b,c,x,y,z,i,j,k;
float e,f,g;
for(i=0;1<2;i++){
        j=0;
scanf("%d%d",&a,&b);
if(a==0&&b==0)
break;
for(;;){
if(a!=0&&b!=0){
x=a%10;
y=b%10;}
z=0;

z=x+y;
if(z>=10)
j++;
a=a/10;
b=b/10;
if(a<1&&b<1)
break;}
if(j==0){
printf("No carry found\n");}
else
printf("%d carry found\n",j);}}
