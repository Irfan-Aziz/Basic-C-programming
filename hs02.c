#include<stdio.h>
func1();
func2();
int main(){
func2();
printf("3");
return 0;
}
func2(){
func1();
printf("2");
}
func1(){
printf("1");}
