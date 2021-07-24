#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){
char word[50]="concatanation",a,temp[50]="_____________";
int i,n=0;
do{
    printf("%s\n",temp);
    printf("Enter your guess: ");
    a=getchar();
    printf("\n");
    for(i=0;i<strlen(word);i++)
        if(a==word[i]) temp[i]=a;
    n++;
}while(strcmp(temp,word));
printf("%s\n",temp);
printf("You guessed the word & used %d guesses",n);}
