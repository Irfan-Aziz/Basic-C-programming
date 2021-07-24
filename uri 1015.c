#include<stdio.h>
#include<math.h>
int main(){
double a,b,c,d,e,f,x,y;
scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
x=a-c;
y=b-d;
e=(x*x)+(y*y);
//e=pow(a-b,2)+pow(c-d,2);
f=sqrt(e);
printf("%0.4lf\n",f);
}
