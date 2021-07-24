#include<stdio.h>
#include<string.h>
int main(){
int i,j,k,l,m,n,p;
char a[50],b[50],c[50];
scanf("%d",&n);
getchar();
for(i=0;i<n;i++){
gets(a);
gets(b);
l=0;
for(j=0,k=0;j<strlen(a),k<strlen(b);j++,k++){
c[l]=a[j];
l++;
c[l]=b[k];
l++;
if(j==strlen(a)-1){
    for(p=k+1;p<strlen(b);p++){
        c[l]=b[p];
        l++;
    }}
else if(k==strlen(b)-1){
    for(p=j+1;p<strlen(b);p++){
        c[l]=a[p];
        l++;
    }
}
}
c[l]='\0';
printf(c);
printf("\n");}}
