#include<stdio.h>
int main(){
int i,j=1,k=1,n,a=1,b=1,c=1;
scanf("%d",&n);
for(i=0;i<n*2;i++){

if(i%2==0&&i>0){
a++;
j++;
b=j*j;
k++;
c=k*k*k;
}
else if(i%2==1){
    b++;
    c++;
}
printf("%d %d %d\n",a,b,c);}}
