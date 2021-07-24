#include<stdio.h>
#include<string.h>
int main(){
char a[10]="Tristan",b[10];
int i,j;
for(i=0;i<3;i++){
gets(b);
if(!strcmp(a,b)){
    printf("Log-on Successful\n");
    break;}
 if(i==2)
    continue;
 else
    printf("Try again\n");
}
if(i==3)
printf("Access Denied\n");}
