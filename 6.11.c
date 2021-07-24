#include<stdio.h>
int main(){
int num, count, n,sum;
count=1;
float ave;
printf("How many numbers?\n");


while(scanf("%d",&num)==1)
{
    if(count==0)
        break;
    scanf("%d",&n);
    sum=sum+n;

}
ave=sum/n;
printf("average=%f",ave);
}
