#include<stdio.h>
int main(){
int a[3][3][3],i,j,k,m=1,sum=0;
for(i=0;i<3;i++)
for(j=0;j<3;j++)
for(k=0;k<3;k++){
a[i][j][k]=m;
m++;}

for(i=0;i<3;i++)
for(j=0;j<3;j++)
for(k=0;k<3;k++){
printf("%d",a[i][j][k]);}

for(i=0;i<3;i++)
for(j=0;j<3;j++)
for(k=0;k<3;k++){
  sum=sum+a[i][j][k];
}
printf("\nSum: %d",sum);
}

