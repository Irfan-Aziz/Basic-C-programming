#include<stdio.h>
main(){
int i,num,is_prime;
scanf("%d",&num);
is_prime=1;
for(i=2;i<=num/2;i++){}
if((num%i)==0)is_prime=0;
if((is_prime )==1){
printf("The number is prime");}
else
printf("The number is not prime");
}
