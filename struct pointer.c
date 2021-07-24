#include<stdio.h>
struct abc{
int x;
int y;
};
int main(){
struct abc a={11,9};
struct abc *ptr=&a;
printf("%d %d\n",ptr->x,ptr->y);}
