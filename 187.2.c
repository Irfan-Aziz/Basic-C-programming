#include<stdio.h>
#include<string.h>
char *p[][2]={"Zubat","poison","onix","rock","sandile","ground","hounter","ghost",
"seadra","water","pichu","electric"};
int main(){
int i;
char str[80];
printf("Enter the name of pokemon\n");
gets(str);
for(i=0;*p[i][0];i++){
if(!strcmp(str,p[i][0])){
printf("The type is %s\n",p[i][1]);}}}
