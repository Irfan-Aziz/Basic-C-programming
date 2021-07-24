#include<stdio.h>
#include<string.h>
int main(){
char str[80],str1[80];
int i,j,k;
gets(str);
i=strlen(str);
printf("%d\n",i);
if(i<80){

for(j=i;j<=80;j++){
strcat(str,".");}
printf(str);
}
}

