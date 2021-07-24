 #include<stdio.h>
 int main(){
 int x,y,i;
 for(;;){
 scanf("%d %d",&x,&y);
 if(x>y){
 printf("Decrescente\n");}
 else if(x<y){
 printf("Crescente\n");}
 if(x==y){
 break;}}
 return 0;}
