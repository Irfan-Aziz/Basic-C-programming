#include<stdio.h>
int main(){
int i,j,k,l,m,n,a[100][100];
for(;;){
        n=1;
scanf("%d",&m);
if(m==0)
break;
for(i=0;i<m;i++){
for(j=0;j<m;j++){
if(i==0){
a[i][j]=j+1;


}
else if(j==0&&i!=0){
    a[i][j]=i+1;
}
else
   a[i][j]=a[i-1][j-1];

}}
for(i=0;i<m;i++){
for(j=0;j<m;j++){
        if(j==m-1){
        printf("%3d\n",a[i][j]);}
else
    printf("%3d ",a[i][j]);}

}
printf("\n");}}
