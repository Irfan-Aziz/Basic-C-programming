bn#include<stdio.h>
#include<conio.h>
void main(){
int a[10],b[10],c[10],i,j,k;
printf("Enter the elements of set A\n");
for(i=0;i<5;i++){
scanf("%d",&a[i]);}
printf("Enter the elements of set B\n");
for(j=0;j<5;j++){
scanf("%d",&b[j]);}
printf("Cartesian Product:\n");
printf("{");
for(i=0;i<5;i++){
for(j=0;j<5;j++){
printf("(%d,%d)",a[i],b[j]);
printf(",");}}
printf("}");
getch();
return 0;
}
