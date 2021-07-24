#include<stdio.h>
long factorial(int);
long find_ncr(int,int);
long find_npr(int,int);
int main(){
int n,r;
long ncr,npr;
scanf("%d\n%d",&n,&r);
ncr=find_ncr(n,r);
npr=find_npr(n,r);
printf("%dc%d=%ld",n,r,ncr);}
