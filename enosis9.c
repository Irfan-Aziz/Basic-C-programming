#include<stdio.h>
getDistinct(int a[], int n){
int p=0,q=0;
int r,i;
for(i=0;i<n;i++){
q=q|(p&q);
p=p^a[i];
r=~(p&q);
p&=r;
q&=r;}
return p;}
int main(){
int a[10]={1,2,3,3};
int n=sizeof(a);
printf("%d\n",getDistinct(a,n));
return 0;}
