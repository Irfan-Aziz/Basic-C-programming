#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main(){
char command[30],value[5];
int i,j,k;
for(;;){
printf("operation?\n");
gets(command);
if(!strcmp(command, "quit"))
break;

printf("Enter first number\n");
gets(value);
i=atoi(value);
printf("Enter second number\n");
gets(value);
j=atoi(value);
if(!strcmp(command, "add")){
printf("%d\n",i+j);}
else if(!strcmp(command, "substract")){
printf("%d\n",i-j);}
else if(!strcmp(command, "multiply")){
printf("%d\n",i*j);}
else
    printf("Unknown operation\n");
}}
