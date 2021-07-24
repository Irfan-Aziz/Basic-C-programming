#include<stdio.h>
int main(){
long int a,b,i,j,k,n;
double x,y,z,p,q,r,s;
scanf("%d",&n);
for(i=0;i<n;i++){
        j=0;
scanf("%ld%ld%lf%lf",&a,&b,&x,&y);
p=a;
q=b;
for(;;){
if(p>q)
break;
p=p+((p*x)/100);
q=q+((q*y)/100);
j++;
if(j>100){
printf("Mais de 1 ceculo.\n");
break;}

}
if(j<=100){
printf("%d anos.\n",j);}
}}
