#include<stdio.h>
void recurse(int i);
int main(void){
recurse(1);
return 0;}
void recurse(int i){
if(i<10){
        printf("%d\n",i);
recurse(i+1);
printf("%d\n",i);}}
