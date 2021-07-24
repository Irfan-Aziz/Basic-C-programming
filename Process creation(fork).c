#include<stdio.h>
#include<sys/types.h>
#include<windows.h>
int main(){
    int a=3,b=7,c;
    int fork();

    int value=fork();
    if(value==0){
        c=a*b;
        printf("Child process result: %d\n",c);
    }
    else{
        c=a+b;
        printf("Parent process result: %d\n",c);
    }

return 0;}
