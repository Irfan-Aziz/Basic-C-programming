#include<stdio.h>
int main(){
int i,j,k;
float a,b,c,d;
char ch;
printf("Bill\t10%\t15%\t20%\n");
for(i=1;i<=100;i++){
d=i;
a=d+d*10/100;
b=d+d*15/100;
c=d+d*20/100;

printf("%f\t%f\t%f\t%f\t",d,a,b,c);
printf("\nDo You want to continue(y/n)\n");
ch=getch();
if(ch=='n')
break;}}
