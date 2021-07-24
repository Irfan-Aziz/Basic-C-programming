#include<stdio.h>
int main(){
double  xy[100][100],h,k,i,j,sx,ex,sy,ey,p,a[100],ans,y1,y2=0,y3;
    int m=0,n=0,v,q;
    printf("Enter the value of h & k\n");
    scanf("%lf\n",&h);
    scanf("%lf\n",&k);
    printf("Enter the starting & ending value of x\n");
    scanf("%lf",&sx);
    scanf("%lf",&sy);
    printf("Enter the starting & ending value of y\n");
    scanf("%lf",&ex);
    scanf("%lf",&ey);
    for(i=sy;i<=ey;i=i+h){
    for(j=sx;j<=ex;j=j+h){
    xy[m][n]=exp(i+j);
    n++;}
    m++;
    n=0;
    }
    p=((ex-sx)/h)+1;
    for(m=0;m<p;m++){
    for(n=0;n<p;n++){
    printf("%.5f",xy[m][n]);
    }}
    v=0;
    for(m=0;m<p;m++){
    for(n=0;n<p;n++){
    a[v]=xy[m][n];
    v++;}}
    y1=a[0]-a[v-1];
    for(q=0;q<i-2;q++){
    y2=+a[q];}
    ans=(h*k/4)*(y1+2*y2);
    printf("The result in trapezoidal rule: %lf",ans);}
