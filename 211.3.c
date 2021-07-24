#include<stdio.h>
void display(char *p);
int main(void){
display("This is a test");
}
void display(char *p){
if(*p){
printf("%c\n",*p);
display(p+1);}
}
