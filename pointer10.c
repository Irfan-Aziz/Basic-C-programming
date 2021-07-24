#include<stdio.h>
#include<string.h>
char *p[][2]={"pikachu","kanto","spinda","johto","bagon","hoenn","piplup","sinnoh",
"axew","unova","noibat","kalos"};
int main(){
int i;
char pokemon[20];
gets(pokemon);
for(i=0;*p[i][0];i++){
if(!strcmp(pokemon,p[i][0]))
printf("%s",p[i][1]);}}
