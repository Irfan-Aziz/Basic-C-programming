#include<stdio.h>
int main(){
char c,*cp;
int i,*ip;
float f,*fp;
double d,*dp;
cp=&c;ip=&i;fp=&f;dp=&d;
printf("%p %p %p %p\n",cp,ip,fp,dp);
cp++;
ip++;
fp++;
dp++;
printf("%p %p %p %p",cp,ip,fp,dp);
}
