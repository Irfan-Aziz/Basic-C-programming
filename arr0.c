#include<stdio.h>
int main(){
int i,k,b[10],a[10]={1,3,2,4,3,5,7,8,9,3};
for(i=0;i<10;i++){
        for(k=0;k<10;k++){
        b[k]=a[i]*a[i];

        }

printf("b[%d]=%d\n",k,b[k]);
return 0;
}}
