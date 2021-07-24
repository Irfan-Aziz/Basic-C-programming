#include<stdio.h>
int main(){
int x,z,i,j,k=2;
scanf("%d%d",&x,&z);
for(;;){
if(z<=x)
scanf("%d",&z);
else
break;}

i=x+(x+1);
j=i;
for(;;){


if(i>z)
break;
else{
k++;
x++;}
j=j+x;
i=j;

}
printf("%d\n",k);}
