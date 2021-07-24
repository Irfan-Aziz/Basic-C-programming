#include<stdio.h>
#include<string.h>
int main(){
int i,j,k,l,n,m,o,p;
char a[200],b[200];
scanf("%d",&n);
//getchar();
for(i=0;i<n;i++){
getchar();
gets(a);
scanf("%d",&m);
for(j=0;j<strlen(a);j++){
    if(a[j]-m<65)
        a[j]=((a[j]-m)+26);
    else
        a[j]=a[j]-m;
}
a[j]='\0';
printf(a);
printf("\n");}}
