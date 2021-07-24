#include<stdio.h>
int main(){
int c,first,last,middle,search,n,a[10];
printf("Enter the number of element\n");
scanf("%d",&n);
printf("Enter the values\n");
for(c=0;c<n;c++){
scanf("%d\n",&a[c]);}
printf("Enter the value to find\n");
scanf("%d",&search);
first=0;
last=n-1;
middle=(first+last)/2;
while(first<=last){
if(a[middle]<search){
first=middle+1;}
else if(a[middle]==search){
printf("%d is found at %d\n",search,a[middle]);
break;}
else
last=middle-1;
middle=(first+last)/2;}
if(first>last)
printf("Not found");
return 0;}
