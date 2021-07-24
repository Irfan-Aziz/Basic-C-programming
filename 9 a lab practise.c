#include<stdio.h>
//# define n 10;
int main(){
int a[10],b[3],c[2],d[10],e[10],f[10],g[10],k=1,j,i;
for(i=0;i<2;i++){
scanf("%d",&b[i]);}
for(i=0;i<2;i++){
scanf("%d",&c[i]);}
//for(i=0;i<2;i++){
//scanf("%d",&d[i]);}
//for(i=0;i<2;i++){
//scanf("%d",&e[i]);}
//for(i=0;i<2;i++){
//scanf("%d",&f[i]);}
//for(i=0;i<2;i++){
//scanf("%d",&g[i]);}
for(i=0;i<2;i++){
        for(j=0;j<2;j++){
    if(b[i]==c[j]){
            //for(i=0;i<3;i++){
        if(b[i]!=c[j]){
            b[i+1]=c[j];
        }}


}}
for(i=0;i<2;i++){
    printf("%d\n",&b[i]);
}}
