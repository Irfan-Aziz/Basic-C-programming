#include<stdio.h>
int main(){
int i,j,k,m,n,x,y;
for(;;){
printf("Enter the no. of test cases\n");
scanf("%d",&n);
if(n==0)
break;
printf("Enter the breaking point\n");
scanf("%d %d",&i,&j);
for(m=0;m<n;m++){
scanf("%d %d",&x,&y);
if(x==i||y==j)
printf("divisa\n");
else if(x>i&&y>j)
printf("NE\n");
else if(x<i&&y>j)
printf("NO\n");
else if(x>i&&y<j)
printf("SE\n");
else if(x<i&&y<j)
printf("SO\n");}}}
