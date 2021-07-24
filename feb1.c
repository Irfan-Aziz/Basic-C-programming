#include<stdio.h>
int main(){
char year;
int days;
printf("Enter 29 if February contains 29 days otherwise press 28:");
scanf("%c",&year);
days=(year=='29')?1:0;
printf("the year is=%c",days);
}
