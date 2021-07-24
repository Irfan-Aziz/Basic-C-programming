#include<stdio.h>
int mystrlen(char*p);
int main(){
char str[80];
printf("Enter a string\n");
gets(str);
printf("The string length is %d",mystrlen(str));
return 0;}
int mystrlen(char*p){
int i;
i=0;
while(*p){
i++;
p++;
}
return i;
}
