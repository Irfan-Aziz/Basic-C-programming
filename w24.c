#include<stdio.h>
int main(){
char ch;
do{
ch=getch();
switch(ch){
case '\t':printf("tab\n");
break;
case '\b':printf("backspace\n");
break;
case '\r':printf("Enter\n");
break;
}}while(ch!='q');}
