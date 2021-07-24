#include<stdio.h>
#include<string.h>
int main(){
int i,j,k,l,m,n;
char a[10000],b[10000],c[10000];

while(gets(a)!=NULL){

l=strlen(a);
j=0;
for(i=0;i<l;i++){
if(a[i]>='a'&&a[i]<='m'||a[i]>='A'&&a[i]<='M'){
a[i]=a[i]+13;}
else if(a[i]>='n'&&a[i]<='z'||a[i]>='N'&&a[i]<='Z'){
a[i]=(a[i]+13)-26;}
//b[j]=a[i];
//j++;
}
//b[j]='\n';
printf(a);
printf("\n");}}
