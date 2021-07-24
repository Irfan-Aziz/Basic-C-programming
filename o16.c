#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
char ch[20],str[20];
int i,j,k;
printf("Enter a string\n");
gets(ch);
i=strlen(ch)-1;
j=0;
while(j<=i){
        if(i>j)
        printf("%c%c",ch[j],ch[i]);
else
    printf("%c",ch[j]);
j++;i--;
 }
}
