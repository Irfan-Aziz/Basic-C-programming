#include<stdio.h>
int main(){
int p,q,r,s;
printf("Truth table\n");
s=p|q;
printf("p\tq\tr\ts\tq->p\n");
for(p=0;p<=1;p++){
for(q=0;q<=1;q++){
for(r=0;r<=1;r++){
printf("%d\t%d\t%d\t%d\t%d\n",p,q,r,(p|q),!s&r);}}}}
