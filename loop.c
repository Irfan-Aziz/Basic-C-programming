#include<stdio.h>
main(){
int a,b,c;
for(a=1;a<4;a++){
for(b=1;b<4;b++){
for(c=1;c<4;c++){
if(a>c&&b<a){
printf("%d,%d,%d\n",a,b,c);}
else if(b>a&&c<b){
printf("%d,%d,%d\n",b );}
else
printf("%d\n",c);}}}}
