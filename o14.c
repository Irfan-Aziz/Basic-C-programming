#include<stdio.h>
int main(){
char a[][2][40]={"ash","1","misty","psyduck","brock","onix","may","blaziken",
"dawn","piplup"},str[10];;
int i;
gets(str);
i=0;
while(strcmp(a[i],"")){
    if(!strcmp(str,a[i][0])){
        printf("%s",a[i][1]);
        break;
    }
    i++;
}
if(strcmp(str,a[i][0])){
    printf("Not found");
}}
