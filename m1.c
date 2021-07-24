#include<stdio.h>
int main(){
unsigned u;
long l;
short s;
printf("Enter an unsigned\n");
scanf("%u",&u);
printf("Enter a long\n");
scanf("%ld",&l);
printf("Enter a short\n");
scanf("%hd",&s);
printf("%u %ld %hd\n",u,l,s);}
