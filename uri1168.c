#include<stdio.h>
#include<string.h>
int main(){
int i,j,k,l,m,n;
char a[200];
scanf("%d",&n);
getchar();
for(i=0;i<n;i++){
        m=0;
gets(a);
for(j=0;j<strlen(a);j++){
    if(a[j]=='1')
        m=m+2;
    else if(a[j]=='2')
        m=m+5;
    else if(a[j]=='3')
        m=m+5;
     else if(a[j]=='4')
        m=m+4;
         else if(a[j]=='5')
        m=m+5;
         else if(a[j]=='6')
        m=m+6;
         else if(a[j]=='7')
        m=m+3;
         else if(a[j]=='8')
        m=m+7;
         else if(a[j]=='9')
        m=m+6;
         else if(a[j]=='0')
        m=m+6;
}
printf("%d leds",m);
printf("\n");}}
