#include<stdio.h>
void rcopy(char *s1,char *s2);
int main(void){
char str[80];
rcopy(str,"This is a test");
printf(str);
return 0;}
void rcopy(char *s1,char *s2){
if(*s2){
*s1++=*s2++;
rcopy(s1,s2);}
else
*s1='\0';}
