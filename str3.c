#include<stdio.h>
#include<string.h>
int main(){
char ch[40],str[30],str1[50];
int i;
gets(ch);
gets(str);
strcpy(str1,str);
printf("%s\n",str1);


i=strcmp(ch,str);
if(i==0)printf("same\n");
else if(i<0)printf("less\n");
else if(i>0)printf("more\n");
printf("%s\n",strcat(ch,str));

printf("%d\n",strlen(str));}
