#include<stdio.h>
int main(){
int a,b,p,q,r,x,y,z,m,n,o,j;

scanf("%d",&a);
printf("Dia %d\n",a);
scanf("%d %d %d",&p,&q,&r);
printf("%d : %d : %d\n",p,q,r);
scanf("%d",&b);
printf("Dia %d\n",b);
scanf("%d %d %d",&x,&y,&z);
printf("%d : %d : %d\n",x,y,z);
m=b-a;
n=x-p;
if(n<0){
    n=24+(x-p);
    m--;
}
o=y-q;
if(o<0){
    o=60+(y-q);
    n--;
}
j=z-r;
if(j<0){
    j=60+(z-r);
    o--;
}
printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)",m,n,o,j);}
