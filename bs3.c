#include<stdio.h>
#include<string.h>
int main(){
int i,j,k,m,n;
char a[100],b[100];
scanf("%d",&m);

for(i=0;i<m;i++){
        getchar();
scanf("%c",&a[i]);}
//gets(a);
scanf("%d",&k);
for(i=0;i<m;i++){
if(a[i]>=65&&a[i]<=90){
if((a[i]+k)>90)
a[i]=a[i]+k-26;
else
a[i]=a[i]+k;}
if(a[i]>=97&&a[i]<=122){
if((a[i]+k)>122)
a[i]=a[i]+k-26;
else
a[i]=a[i]+k;}
}
a[i]=='\0';
//printf(a);
for(i=0;i<m;i++){
       // getchar();
printf("%c",a[i]);}
}
