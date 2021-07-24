#include<stdio.h>
int main(){
char pokemon[7][7]={"A","B","C","D","E","F",""};
char index[5];
char i,j;
printf("Enter index\n");
i=getch();

printf("\n");
i=i-'1';
if(i>=0&&i<=6)
    printf("%s",pokemon[i]);}
