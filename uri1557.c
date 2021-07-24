#include<stdio.h>
int main(){
long long int a[100][100],i,j,k,l,n;
for(;;){
l=1;
scanf("%lld",&n);
if(n==0)
break;
for(i=0;i<n;i++){
for(j=0;j<n;j++){
if(i==0){
a[i][j]=l;
l=2*l;}
else
a[i][j]=2*a[i-1][j];}}
for(i = 0;i < n;i++){
            for(j = 0;j < n;j++){
                if(n==3 || n==4){
                       if(j==0) printf("%2lld",a[i][j]);
                       else printf(" %2lld",a[i][j]);
                }
                else if(n==5){
                       if(j==0) printf("%3lld",a[i][j]);
                       else printf(" %3lld",a[i][j]);
                }
                else if(n==6 || n==7){
                       if(j==0) printf("%4lld",a[i][j]);
                       else printf(" %4lld",a[i][j]);
                }
                else if(n==8 || n==9){
                       if(j==0) printf("%5lld",a[i][j]);
                       else printf(" %5lld",a[i][j]);
                }
                else if(n==10){
                       if(j==0) printf("%6lld",a[i][j]);
                       else printf(" %6lld",a[i][j]);
                }
                else if(n==11 || n==12){
                       if(j==0) printf("%7lld",a[i][j]);
                       else printf(" %7lld",a[i][j]);
                }
                else if(n==13 || n==14){
                       if(j==0) printf("%8lld",a[i][j]);
                       else printf(" %8lld",a[i][j]);
                }
                else if(n==15){
                       if(j==0) printf("%9lld",a[i][j]);
                       else printf(" %9lld",a[i][j]);
                }
                else if(n==1)printf("%1lld",a[i][j]);
                else if(n==2){
                    if(j==0)printf("%lld",a[i][j]);
                    else printf(" %lld",a[i][j]);
                }
            }printf("\n");
        }printf("\n");}}
