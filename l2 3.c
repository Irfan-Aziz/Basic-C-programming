#include<stdio.h>
main(){
char feb;
int days;
printf("Enter the number of days\n");
scanf("%d",&days);
feb=(days==29)?'1':'0';
printf("The year is %c",feb);}
