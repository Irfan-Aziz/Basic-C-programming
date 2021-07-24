 #include<stdio.h>
 main(){
 int r;
 char c;
 printf("Enter a character\n");
 scanf("%c",&c);
 r=((c>='a'&&c<='z')||(c>='A'&&'Z'>=c))?1:0;
 printf("%c is a %d",c,r);}
