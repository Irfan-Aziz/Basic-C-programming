#include<stdio.h>
void printFibonacci(int);
int main(){
int i,j,n;
i=0,j=1;
scanf("%d",&n);
printf("Enter the range of 1st %dth number\n",n);
printf("Fibonacci series:");
printf("%d %d",0,1);
printFibonacci(n);
return 0;}
void printFibonacci(int n){
static long int x,y,sum;
if(n>0){
        x=0;
y=1;
sum=x+y;
x=y;
y=sum;
printf("%d",sum);
printFibonacci(n-1);



}
}
