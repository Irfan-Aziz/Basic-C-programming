#include<stdio.h>
int main(){
int i,j,k;
char ch;
for(i=1;i<61;i++){
if(i%6==0){
printf("%d\n",i);
printf("More?(Y/N)\n");
ch=getch();
if(ch=='N')
break;
printf("\n");}}}
