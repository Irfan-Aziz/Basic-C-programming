#include<stdio.h>
int main(){
double*p,q,temp;
temp=12.22;
p=&temp;
q=*p;
printf("%f",q);
return 0;}
