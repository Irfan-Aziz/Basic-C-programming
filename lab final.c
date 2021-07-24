  #include<stdio.h>
  #include<string.h>
 int main()
    {
 int i,j,k,space=0;
 char a[1000],string,ch;
 gets(string);
 j=strlen(string);
 a[i]=string;
 for(i=0;i<=j;i++)
    {
 if(a[i]=' ');
 space++;}
 printf("%d\n",space);
 if(a[i]=' ')
 a[i]='%20';
 printf("%s",string);
 return 0;
 }
