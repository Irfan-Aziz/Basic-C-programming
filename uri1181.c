#include<stdio.h>
int main(){
int i,j,k,l;
double a[12][12],sum=0,b;
char ch;
scanf("%d %c",&k,&ch);
for(i=0;i<3;i++){
for(j=0;j<3;j++){
scanf("%lf",&a[i][j]);}}

for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        if(k==i){
            sum=sum+a[i][j];
        }
    }
}
if(ch=='S')
printf("%lf\n",sum);
else if(ch='M')
printf("%lf\n",sum/3);
}
