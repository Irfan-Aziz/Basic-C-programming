#include<stdio.h>
#include<string.h>
int main(){
int i,j,k,l,m,n,o,p,q,r;
char a[100],b[100],c[100],d[100],e[100];
scanf("%d",&n);
getchar();
for(i=0;i<n;i++){
gets(a);
gets(b);
gets(c);
l=0;
o=0;
q=0;

for(k=0;k<=strlen(b)-1;k++){

d[l]=b[k];
l++;}
m=l;
for(p=0;p<=strlen(c)-1;p++){
d[m]=c[p];
m++;}
d[m]='\0';
for(j=0;j<=strlen(a);j++){
for(k=0;k<=strlen(d)-1;k++){
if(d[k]!=a[j]){
//printf("CHEATER\n");
o=1;
break;}}}
if(o!=1){
for(j=0;j<=strlen(d)-1;j++){
for(k=0;k<=strlen(d)-1;k++){
if(d[j]==d[k]){
printf("CHEATER\n");
q=1;
break;}}}}
r=0;
if(o!=1||q!=1){
for(j=0;j<strlen(a);j++){
for(k=0;k<strlen(d);k++){
if(a[j]!=d[k]){
e[r]=a[j];
r++;}}}}
e[r]='\0';
printf(e);
printf("\n");
}}
