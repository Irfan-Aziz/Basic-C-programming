#include<stdio.h>
main(){
int a[31],i,min,max,sum;
int days;
printf("Enter the no.of days\n");
scanf("%d",&days);
for(i=0;i<days;i++){
printf("Enter the temperature for day %d",i+1);
scanf("%d",&a[i]);
printf("%d\t",a[i]);}


sum=0;
for(i=0;i<days;i++){
sum=sum+a[i];}
printf("average %d",sum/days);
min=200;
max=0;
for(i=0;i<days;i++){
if(min>a[i])
min=a[i];
if(max<a[i])
max=a[i];}
printf("Maximum %d\n",max);
printf("Minimum %d\n",min);
}
