#include<stdio.h>
int main(){
int a,b,d,i,j,k;
long long c;
scanf("%d",&a);
for(i=0;i<a;i++){
scanf("%lld",&c);
d=0;
for(j=1;1<2;j++){
d=d+j;
if(d==a){
printf("%d\n",j);
break;}
else if(d>a){
    printf("%d\n",j-1);
    break;
}
}}}
