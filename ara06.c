#include<stdio.h>
main(){
int ft[30]={74,58,86,96,76,62,74,77,89,76,87,78,65,55,85,77,66,64,65,71,63,77,65,88,81,56,66,76,88,90},
st[30]={76,76,76,88,76,88,75,92,61,83,72,78,92,83,76,77,84,82,76,55,66,69,61,63,68,92,88,81,77,73},
final[30]={88,84,99,93,96,77,83,99,94,82,88,69,83,84,89,86,77,79,80,91,79,99,94,95,84,60,66,61,69,63};
int i,n;
double total_marks[40];
for(i=0;i<=40;i++){
total_marks[i]=ft[i]/4.0+st[i]/4.0+final[i]/2.0;}
scanf("%d",&n);
printf("Roll number %d\tTotal marks %0.01lf",n,total_marks[n-1]);}