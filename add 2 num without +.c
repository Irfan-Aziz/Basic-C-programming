#include<stdio.h>
int func(int vrbl1,int vrbl2){
do{
 int carry=vrbl1 & vrbl2;
vrbl1=vrbl1^vrbl2;
vrbl2=carry<<1;}
while(vrbl2!=0);
return vrbl1;
}
int main(){
printf("%d",func(23,45));
return 0;}
