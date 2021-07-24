#include<stdio.h>
int main(){
int a,b=0,c=0,d=0;
for(;;){
scanf("%d",&a);
if(a==4)
break;

else if(a==1)
b++;
else if(a==2)
c++;
else if(a==0)
d++;
else
    continue;}
printf("MUITO OBRIGADO\n");
printf("Alcool: %d\n",b);
printf("Gasolina: %d\n",c);
printf("Diesel: %d\n",d);}
