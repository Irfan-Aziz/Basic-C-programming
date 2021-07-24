#include<stdio.h>
struct{
char *engine;
} marcedes, bmw;
int main(){
marcedes.engine="ZX11 176 BENZ";
bmw.engine="DDr3 1221 FLAT";
printf("%s\n",marcedes.engine);
printf("%s\n",bmw.engine);
return 0;
}
