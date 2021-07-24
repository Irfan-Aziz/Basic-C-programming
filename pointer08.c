#include<stdio.h>

int main(){
int i,j;
char str1[]="Boo yaah",*p1,*p2;

p1=str1;
while(*p1&&*p1!=' ')
    p1++;
    printf(p1);
}
