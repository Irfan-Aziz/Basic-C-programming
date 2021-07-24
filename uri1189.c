#include<stdio.h>
int main(){
int i,j,k,m=1,n=10;
double a[12][12],b,c,p,sum=0;
char ch;
scanf("%c",&ch);
for(i=0;i<12;i++){
for(j=0;j<12;j++){
scanf("%lf",&a[i][j]);}}
for(j=0;j<5;j++){
for(i=m;i<=n;i++){

sum=sum+a[i][j];

}
m++;
n--;
}
if(ch=='S')
printf("%0.1lf\n",sum);
else if(ch=='M')
printf("%0.1lf\n",sum/30);
}
