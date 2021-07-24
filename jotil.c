#include<stdio.h>

main()
{
    int i,lm,ul,sum=0;
    scanf("%d %d",&lm,&ul);
    for(i=lm;i<=ul;i++)
    {
        if(i%2==0)
            sum=sum+i;
    }
    if(sum>50000)
        printf("Summation is %d greater than 50000",sum);
    else printf("Summation is less than 50000");
    return 0;
}
