#include<stdio.h>
#include<string.h>
int main(){
char str1[20],bigstr[20]="";
int i,j;

for(;;){
        printf("Enter a string\n");
gets(str1);
if(!strcmp(str1,"quit"))
break;
strcat(str1,"\n");
if(strlen(bigstr)+strlen(str1)>=20)
    break;
    strcat(bigstr,str1);
}
printf(bigstr);}
