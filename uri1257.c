#include<stdio.h>
#include<string.h>
int main(){
int i,j,k,l,m,n,o,p=0;
char a[1000],b[1000],c[1000];
scanf("%d",&n);
while(n--){
p=0;
getchar();
scanf("%d",&m);
for(j=0;j<m;j++){

gets(a);
for(k=0,o=0;k<strlen(a);k++){
  l=(int)(a[k]-64);
o=o+l-1+j+k;
}
p=p+o;}
printf("%d\n",p);}}
