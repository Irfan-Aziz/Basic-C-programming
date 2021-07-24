#include<stdio.h>
#include<conio.h>
int main(){
int i;
char ch,smallest;
printf("Enter 10 characters\n");
smallest='z';
for(i=0;i<10;i++){
ch=getche();
if(ch<smallest)smallest=ch;}
printf("\nThe smallest character is %c",smallest);}
