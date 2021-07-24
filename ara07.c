#include<stdio.h>
int main(){
int marks,i,count;
int total_marks[]={78,76,76,90,78,55,68,81,71,73,99,66,78,84,65,67,76,66,77,84,81,71,81,74,64,64,77};
for(marks=50;marks<=100;marks++){
count=0;
for(i=0;i<=28;i++){
if(total_marks[i]==marks){
count++;}
}
printf("marks:%d count;%d",marks,count);}}
