#include<stdio.h>
#include<string.h>
int main(){
char str[1000],str1[1000],str3[10];
int i,j,k,l,m,n,o;
scanf("%d",&k);
getchar();
for(i=0;i<k;i++){

gets(str);
for(j=0;j<strlen(str);j++){
if(str[j]<91&&str[j]>64||str[j]>96&&str[j]<123)
str[j]=str[j]+3;
else
    continue;}



n=0;
for(m=strlen(str)-1;m>=0;m--){
    str1[n]=str[m];
    n++;
}
str1[n]='\0';

l=strlen(str1)/2;

for(o=l;o<=strlen(str1)-1;o++){
    str1[o]=str1[o]-1;
}
printf(str1);
printf("\n");
}}
