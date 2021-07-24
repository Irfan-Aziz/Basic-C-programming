#include<stdio.h>
int main(){
long long a,b,c,d;
while(scanf("%lld",&a)!=EOF){
        scanf("%lld",&b);
if(a>b){
c=a;
d=b;}
else{
c=b;d=a;}
printf("%lld\n",c-d);}}
