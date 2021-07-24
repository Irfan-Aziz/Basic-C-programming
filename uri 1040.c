#include<stdio.h>
int main(){
float a,b,c,d,e,f,g;
scanf("%f %f %f %f",&a,&b,&c,&d);
e=(a*2+b*3+c*4+d*1)/(2+3+4+1);
printf("Media: %0.1f\n",e);
if(e<5){
printf("Aluno reprovado\n");}
else if(e>=5&&e<=6.9){
printf("Aluno em exame\n");
scanf("%f",&f);
printf("Nota do exame: %0.1f\n",f);
g=(e+f)/2;
if(5<=g){
printf("Aluno aprovado\n");
}
else
printf("Aluno reprovado\n");
printf("Media final: %0.1f",g);}
else if(e>=7){
printf("Aluno aprovado\n");}
return 0;}
