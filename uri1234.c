#include<stdio.h>
#include<string.h>
int main(){
int i,j,k;
char a[50],b[50];
for(;;){
gets(a);
j=0;
k=0;
for(i=0;i<strlen(a);i++){
if(k%2==0){
if(a[i]>='a'&&a[i]<='z'){
a[i]=a[i]-32;
k++;
}
else if(a[i]>='A'&&a[i]<='Z')
    k++;
}
else if(k%2==1){
if(a[i]>='A'&&a[i]<='Z'){
a[i]=a[i]+32;
k++;}
else if(a[i]>='a'&&a[i]<='z')
        k++;}
b[j]=a[i];
j++;}
b[j]='\0';
printf(b);
printf("\n");}}
