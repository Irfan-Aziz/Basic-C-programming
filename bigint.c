#include<stdio.h>
#include<string.h>
int convert(char d){
    return (d-'0');
}
char* Add(char st1[], char *str2[])
{
    int l1,l2,i,j,n;
    char s[100];
    l1 = strlen(str1);
    l2 = strlen(str2);
    if (l1>l2)
        n = l1;
    else
        n = l2;
    s[n+1]='\0';
    l1--;
    l2--;
    while(l1>=0 || l2>=0){

    }
}
int main(){
char a[100],b[100],c[100];
int sum[100],temp[100];
int i,j,k,l,s=0,c,m,n;
gets(a);
gets(b);
char x,y,mult,carry;
m=strlen(a);
n=strlen(b);

for(i = 0; i<n; i++){
    sum[i] = '0';
}
for(i = n-1;i>=0;i--){
    x = convert(b[i]);
    carry = 0;
    temp[m+1] = '\0';
    for(j=m-1;j>=0;j--){
        y = convert( a[j]);
        mult = x*y + carry;
        temp[j+1] = mult%10 + '0';
        carry = mult/10;
    }
    temp[j+1] = carry + '0';
    sum = Add(sum,temp);
}
x=convert(a);
y=convert(b);
for(i=n-1;i>=0;i--){
}

}
