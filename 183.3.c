#include<stdio.h>
#include<string.h>
int main(){
char str1[80]="pointers are fun",str2[80];
char *p;
int i,j;
p=str1;
for(i=0;p[i];i++){
    if(p[i]==" "){
        for(j=i;p[j];j++)
            printf(p);
    }
}
}
