#include<stdio.h>

int main(){
char a[20],b[20],c[20];
gets(a);
if(!strcmp(tolower(a),"vertebrato")){
   gets(b);
   if(!strcmp(tolower(b),"ave")){
    gets(c);
    if(!strcmp(tolower(c),"carnivoro")){
        printf("aguia\n");}
    else if(!strcmp(tolower(c),"onivoro")){
        printf("pomba\n");}}

   else if(!strcmp(tolower(b),"mamifero"))
        gets(c);
    if(!strcmp(tolower(c),"herbivoro")){
        printf("vaca\n");}
    else if(!strcmp(tolower(c),"onivoro")){
        printf("homem\n");}
        }
      else  if(!strcmp(tolower(a),"invertebrado")){
   gets(b);
   if(!strcmp(tolower(b),"inseto")){
    gets(c);
    if(!strcmp(tolower(c),"hematofago")){
        printf("pulga\n");}
    else if(!strcmp(tolower(c),"hebivoro")){
        printf("lagarta\n");}}

   else if(!strcmp(tolower(b),"anelideo"))
        gets(c);
    if(!strcmp(tolower(c),"hematofago")){
        printf("sanguessuga\n");}
    else if(!strcmp(tolower(c),"onivoro")){
        printf("minhoca\n");}
        }}
