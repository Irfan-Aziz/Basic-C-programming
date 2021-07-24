#include<stdio.h>
o_to_c(int o);
main(){
   int cup;
   int ounce;
   printf("Enter ounces");
   scanf("%d",&ounce);
   cup=o_to_c(ounce);
   printf("%d cups",cup);
   return 0;}
   int o_to_c(int o){
   return o/8;}
