#include<stdio.h>
#include<math.h>
long factorial(int);
long find_ncr(int,int);
long find_npr(int,int);
int main(){
int n,r;
long p,c;
printf("Enter the value of n\n");
scanf("%d",&n);
printf("Enter the value of r\n");
scanf("%d",&r);
p=find_npr(n,r);
c=find_ncr(n,r);
printf("nPr=%lb",p);
printf("nCr=%lb",c);
return 0;}
long find_npr(int n,int r){
long result;
result=factorial(n)/factorial(n-r);
return result;}

long find_ncr(int n,int r){
long result;
result=factorial(n)/(factorial(r)*factorial(n-r));
return result;}

long factorial(int n){
int i;
long result=1;
for(i=0;i<n;i++)
    result=result*i;

return result;}
