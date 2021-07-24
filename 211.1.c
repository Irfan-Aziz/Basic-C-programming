#include<stdio.h>
int fact(int i);
int main(void){
    int i,j;
j=fact(4);
printf("%d\n",j);
return 0;
}
int fact(int i){

if(i==1)
      return 1;
else


return i*fact(i-1);
}


