#include<stdio.h>
main()
{int i,j,n,k;
printf("enter your value:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{for(j=1;j>=(i+1);j++)
printf(" ");

for(k=1;k<=6;k++)
printf("*");

printf("\n");
}}
