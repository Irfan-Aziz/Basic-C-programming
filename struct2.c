#include<stdio.h>
struct car{
char engine[50];
char model[50];
char year[10];
float mileage;
};
int main(){
struct car c1={"A12 BG","Mazda","2017",22.3};
struct car c2={"XJ 220","Jaguar","2018",27.82};
printf("%s",c1.engine);
printf("\n%s",c2.model);
printf("\n%s\n",c2.year);
printf("%s",c1.year);}
