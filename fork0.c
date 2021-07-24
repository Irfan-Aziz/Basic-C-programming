#include<stdio.h>
#include<sys/types.h>
void child(void);
void parent(void);
void main(void){
pid_t fork(void);
if(fork(void)==0)
child();
else
parent();}
void child(void){
int i;
for(i=0;i<=10;i++){
printf("This line from child, value-=%d\n",i);}
printf("Child is done\n");}
void parent(void){
int i;
for(i=0;i<=10;i++){
printf("This line from parent, value-=%d\n",i);}
printf("Parent is done\n");}
