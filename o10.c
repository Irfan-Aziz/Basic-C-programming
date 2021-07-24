#include<stdio.h>
#include<string.h>
int main(){
char text[][80]={"am","is","are","was","were",""};
int i,j;
for(i=0;text[i][0];i++){
for(j=0;text[i][j];j++){
printf("%c",text[i][j]);}
printf(" ");}}
