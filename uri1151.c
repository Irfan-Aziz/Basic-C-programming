#include<stdio.h>
int main(){
int n,i,j=1,sum=0,k;
scanf("%d",&n);
for(i=1;i<=n;i++){
if(i==n){
printf("%d\n",sum);
break;
}
printf("%d ",sum);
k=sum+j;

sum=j;
j=k;
}
}
