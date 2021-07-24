#include<stdio.h>
int main(){
int a[][3]={1,1,1,2,4,8,3,9,27,4,16,64,5,25,125,6,36,216,7,49,343,8,64,512,
9,81,729,10,100,1000};
int i,n,j;
printf("Enter the value of cube\n");
scanf("%d",&n);
for(i=0;i<10;i++){
if(n==a[i][2]){
printf("cube's root %d root's square %d\n",a[i][0],a[i][1]);
break;}}
if(i==10)
printf("Not found!");}
