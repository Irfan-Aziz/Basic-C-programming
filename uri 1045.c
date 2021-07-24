#include<stdio.h>
int main(){
double a,b,c,d,e,f,g,h,i,j,t;
scanf("%lf %lf %lf",&a,&b,&c);
d=a*a;
if(a<b){
        t=a;
a=b;
b=t;


}
if(b<c){
    t=b;
    b=c;
    c=t;
}
if(a<b){
        t=a;
a=b;
b=t;


}
if(a>=(b+c)){
        printf("NAO FORMULA TRIANGULO\n");

}
else if(d=b*b+c*c){
    printf("TRIANGULO RECTANGULO\n");
}
else if(d>b*b+c*c){
    printf("TRIANGULO OBTUSANGULO\n");

}
else if(d<b*b+c*c){
    printf("TRIANGULO ACUTANGULO\n");
}
 if(a==b&&b==c){
    printf("TRIANGULO EQUILATERO\n");}
    else if(a==b||b==c){
        printf("TRIANGULO ISOSCELES\n");

}
}
