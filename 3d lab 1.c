#include<stdio.h>
float f(float x){
return pow(x,3)-2*(x)-5;
}
int main(){
int count=0;max;
float x1,x2,x3,x;
printf("Enter the value of x0,x1\n");
x3=((x1*f(x2))-(x2*f(x1)))/(f(x2)-f(x1));
do{
if(f(x1)*f(x3)<0)
x2=x3;
else
x1=x3;
x4=x3;
x3=((x1*f(x2)))-(x2*f(x1)))/(f(x2)-f(x1));
count++;
if(abs(x4-x3)<0.0001 )
printf("%f",x4);

}while(count<max);}
