#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){
char str[20];
int i,j=0,k=0,l=0;
gets(str);
for(i=0;i<strlen(str);i++){
        switch(str[i]){
case '.': j++;
break;
case ',': k++;
break;
case ' ': l++;
break;}}
printf("spaces\tcommas\tperiod\t");
printf("\n%d\t%d\t%d\t",l,k,j);
return 0;}
