#include<stdio.h>
main(){
int i,n;
int m=0;
for(n=1;n<=20;n++){
for(i=1;i<=10;i++){
m=m+n;
printf("%d*%d=%d\n",n,i,m);
}
}
}
