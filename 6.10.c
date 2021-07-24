#include<stdio.h>
#define EOL '\n'
main(){
int count,tag;
char letter[80];
while((letter[count]=getchar()!=EOL)){
++count;}
tag=count;
count=0;
while(count<tag){
putchar(toupper(count));
++count;}}
