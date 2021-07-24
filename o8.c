#include<stdio.h>
int main(){
    char a[10][40],n;
int i,j,k,l;
printf("Enter the strings\n");
for(i=0;i<10;i++){
gets(a[i]);}
do{
    printf("Enter the number of string\n");
    scanf("%d",&j);
    j--;
    if(j>=0&&j<10)
        printf("%s",a[j]);
}while(j>=0);
}
