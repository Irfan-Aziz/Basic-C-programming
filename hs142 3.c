#include<stdio.h>
#include<conio.h>
int main(){
char m[80];
int i;
printf("Enter a message\n");
for(i=0;i<80;i++){
m[i]=getche();
if(m[i]=='\r')break;
}
printf("\n");
for(i=0;m[i]!='\r';i++){
printf("%c",m[i]);}
return 0;}
