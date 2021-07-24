#include<stdio.h>
#include<math.h>
int main(){
int x;
double r1,r2,r3,area1,area2,area3;
scanf("%lf",&r1);
scanf("%lf",&r2);
scanf("%lf",&r3 );
for(x=1;x<4;x++){
switch(x){
case 1:

area1=2*r1*2*r1-3.1416*r1*r1;
printf("%lf\n",area1);
case 2:

area2=2*r2*2*r2-3.1416*r2*r2;
printf("%lf\n",area2);
case 3:

area3=2*r3*2*r3-3.1416*r3*r3;
printf("%lf\n",area3);}
return 0;}}
