#include<stdio.h>

main()
{
    int i,n,fac=1;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fac=fac*i;
    }
    printf("factorial is %d",fac);
}
