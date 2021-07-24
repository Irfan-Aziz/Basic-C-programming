#include<stdio.h>
main(){
int i,prime,num;
scanf("%d",&num);
prime=1;
for(i=2;i<=num/2;i++){
if((num%i)==0)
prime=0;
 if((num%i)==1)
printf("%d is a prime number\n",num);
else
printf("%d is not prime",num);
return 0;}}
