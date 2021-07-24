#include<stdio.h>
#include<string.h>
char word[][2][40]={"grass","odish","fire","torkoal","water","goldeen","electric","emolga",
"dark","umbreon","fairy","snubbull","ice","snover","",""};

int main(){
char type[10];
int i;
printf("Enter type name\n");
gets(type);
i=0;
while(strcmp(word[i][0],"")){
if(!strcmp(type,word[i][0])){
printf("The pokemon is %s",word[i][1]);
break;}
i++;}
if(!strcmp(word[i][0],""))
printf("Not in the table");
}
