#include<stdio.h>
int main(){
int m,n,temp=0;
printf("\nenter the number to be divided\n");
scanf("%d",&m);
printf("\nEnter number from which to be divided\n");
scanf("%d",&n);
while(m>=n){
m=m-n;
temp++;
printf("%d\n",m);}
printf("Quotient is %d\n",temp);
printf("Remainder is %d\nc",m);
return 0;}
