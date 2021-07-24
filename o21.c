#include<stdio.h>

int main(){
char str[][2][40]={"Graham","7","Bill","6","Hog","4"},str2[10];
int i=0,j,k;
gets(str2);
while(strcmp(str[i],"")){
if(!strcmp(str[i][0],str2)){
printf("%s",str[i][1]);
break;}
i++;}
if(strcmp(str[i][0],str2))
printf("Not found\n");
}
