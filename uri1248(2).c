#include<stdio.h>
#include<string.h>
int main(){
int i,j,k,m,n,c,x,l;
char a[100],b[100],d[100];
printf("Enter test cases\n");
scanf("%d",&n);
getchar();
for(c=0;c<n;c++){


printf("Enter str\n");
gets(a);
gets(b);
gets(d);
x=0;
for(i=0,k=0;i<strlen(b),k<strlen(d);i++,k++){
for(j=i+1,l=k+1;j<strlen(b),l<strlen(d);j++,l++){
if(b[i]==b[j]||d[k]==d[l]){
 printf("CHEATER\n");
x++;
break;}
else
    printf("N\n");
}}
/*if(x==0){
    for(i=0;i<strlen(b);i++){
        for(j=0;j<strlen(d);j++){
            if(b[i]==d[j]){
                x++;
                printf("CHEATER\n");
                break;
            }
        }
    }
}
if(x==0){
        for(i=0;i<strlen(b);i++){
            for(j=0;j<strlen(a);j++){
                if(b[i]!=a[j]){
                    x++;
                printf("CHEATER\n");
                break;
           } }
        }}
if(x==0){
        for(i=0;i<strlen(d);i++){
            for(j=0;j<strlen(a);j++){
                if(d[i]!=a[j]){
                    x++;
                printf("CHEATER\n");
                break;
           } }
        }}*/



}}
