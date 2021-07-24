#include<stdio.h>

main()
{
    int i,j,k,count=0,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {for(j=1;j<=n;j++)
    {count=count+j;
    for(k=1;k<=i;k++)
    {printf("%d",count);
    }}printf("\n");}}
