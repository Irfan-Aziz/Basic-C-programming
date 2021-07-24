#include<stdio.h>
#include<math.h>
void print(int *num,int n){
int i;
for(i=0;i<n;i++)
printf("%d\n",num[i]);}
int main(){
int s,temp,i,j;
scanf("%d",&s);
int a[s];
for(i=0;i<s;i++){
scanf("%d",&a[i]);}
for(j=1;j<=s;j++){
for(i=0;i<s;i++){
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
print(a,s);}}
return 0;}
