#include<stdio.h>
main(){
char feb;
int days;
printf("Enter the days of february\n");
scanf("%d\n",&days);
feb=(days==29)?1:0;
printf("The year is %c",feb);}
