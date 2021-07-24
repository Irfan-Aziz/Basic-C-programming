#include<stdio.h>
int main(){
char feb;
int days;
printf("Enter 1 if the year is leapyear otherwise enter o:");
scanf("%c",&feb);
days=(feb=='1')?29:28;
printf("Number of days is=%d",days);
}
