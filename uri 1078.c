#include<stdio.h>
int main(){
int x,y=1,i;
scanf("%d",&x);
for(i=1;i<=10;i++){
y=x*i;
printf("%d * %d = %d\n",i,x,y);}
}
