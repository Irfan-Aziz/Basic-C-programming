#include<stdio.h>
int main(){
int t,i,j,a[3],a1,b,c,count=0,temp;
scanf("%d",&t);
while(t--){
++count;
scanf("%d %d %d",&a1,&b,&c);
a[0]=a1;
a[1]=b;
a[2]=c;
for(i=0;i<3;i++){
for(j=i+1;j<3;j++){
temp=a[i];
a[i]=a[j];
a[j]=temp;}}
printf("case %d %d",count,a[j]);}
return 0;}
