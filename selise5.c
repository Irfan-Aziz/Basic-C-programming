#include<stdio.h>
int main(){
int a[100],p[100][100],i,j,k,m,n,skip,l,temp;
char ch;
scanf("%d",&n);
for(i=0;i<n;i++){
a[i]=i+1;}
scanf("%d",&skip);
m=n-skip;
for(i=0;i<m;i++){
a[i]=a[skip];
skip++;}
for(i=0;i<m;i++){
printf("%d\n",a[i]);}
j=0,k=0;
for(i=0;i<m;i++){
    if(i!=0&&i%4==0){
        j++;
        k=0;
    }
    p[j][k]=a[i];
    k++;
}
scanf("%d",&l);
getchar();
scanf("%c",&ch);
//for(i=0;p[i][0];i++){
   if(ch=='0'){ for(j=0;p[l-1][j];j++){
        printf("%d\n",p[l-1][j]);}
    //}
}
 if(ch=='1'){ for(j=0;p[l-1][j];++j){
     for(k=i+1;p[l-1][k];++k){
        if(p[l-1][j]<p[l-1][k]){
            temp=p[l-1][j];
            p[l-1][j]=p[l-1][k];
            p[l-1][k]=p[l-1][j];
        }
     }}
         for(j=0;p[l-1][j];j++){

        printf("%d\n",p[l-1][j]);}
    //}
}
}
