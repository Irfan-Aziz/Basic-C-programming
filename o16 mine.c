#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
char ch[20],str[20];
int i,j,k;
printf("Enter a string\n");
gets(ch);
i=strlen(ch);
j=0;
while(i>=j){
        if(j%2==0){
        printf("%c",ch[j]);}

else if(j%2==1){
printf("%c",ch[i-1]);
i--;}

j++;
 }
 printf(str);
}
