#include<stdio.h>
#include<string.h>
int main(){
char a[100],b[100],c[100];
int i,j,k,sum;
gets(a);
j=0;
for(i=0;i<strlen(a);i++){
if(a[i]=='.'){
k=i;
break;}
else{
b[j]=a[i];
j++;}
}

//b[j]='\0';
//printf(b);
sum=0;
for(i=0;i<strlen(b);i++){
        if(a[i]=='+'){
            sum=sum+a[i-1]+a[i+1];
        }
        if(a[i]=='-'){
            sum=sum+a[i-1]-a[i+1];
        }
        printf("%d",sum);

}}
