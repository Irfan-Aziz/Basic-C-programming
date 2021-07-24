#include<stdio.h>
int main(){
int i,j,k;
FILE *fx,*fy;
float x[10],x2[10],y[10],xy[10],sum1=0.0,sum2=0.0,sum3=0.0,sum4=0,a0,a1;
fx=fopen("X.txt","r");
fy=fopen("Y.txt","r");
//printf("Enter the value of x\n");
for(i=0;i<6;i++){
fscanf(fx,"%f",&x[i]);}
fclose(fx);
//printf("Enter the value of y\n");
for(i=0;i<6;i++){
fscanf(fy,"%f",&y[i]);}
fclose(fy);
for(i=0;i<6;i++){
x2[i]=x[i]*x[i];
//printf("x2[%d]:%f\n",i,x2[i]);
}
for(i=0;i<6;i++){
xy[i]=x[i]*y[i];
printf("xy[%d]=%f\n",i,xy[i]);}
for(i=0;i<6;i++){
    sum1=sum1+x[i];
}
printf("sum1=%f",sum1);
for(i=0;i<6;i++){
    sum2=sum2+y[i];
}
printf("sum2=%f",sum2);
for(i=0;i<6;i++){
    sum3=sum3+x2[i];
}
printf("sum3=%f",sum3);
for(i=0;i<6;i++){
    sum4=sum4+xy[i];
}
printf("sum4=%f");
a0=((sum1*(-sum4))-(sum2*(-sum3)))/((6*sum2)-(sum1*sum1));
a1=((sum1*(-sum3))-(6*(-sum4)))/((6*sum2)-(sum2*sum2));
printf("\na0=%f  a1=%f",a0,a1);
return 0;}
