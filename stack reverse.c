#include<stdio.h>
#include<string.h>
char c[30];
int top=-1;
char push(char n){
    char c[30];
    top++;
    c[top]=n;
    printf("%c\n",c[top]);
    return c[top];

}
char pop(){
char c[30];
//char ch;
//ch=c[top];
top--;
return c[top];
printf("%c\n",c[top]);
//top--;
}
/*char top(){
    printf("%d\n",top);
return c[top]}*/

char reverse(char b[30],int m){
int j,k=0;
char p[30];
for(j=0;j<m;j++){
    p[k]=push(b[j]);
    k++;
}
printf("%s\n",c[top-1]);
k=0;
for(j=0;j<m;j++){
    p[k]=pop();
    //pop();
    k++;
}
p[k]='\0';
//printf(p);
}
int main(){
    int i;
char a[30];
gets(a);
reverse(a,strlen(a));
}
