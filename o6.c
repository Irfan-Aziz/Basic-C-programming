#include<stdio.h>
int main(){
int a[5][2]={1,12,2,14,3,11,4,10,5,11};
int n,i;
printf("Enter the no. of file server\n");
scanf("%d",&n);
for(i=0;i<5;i++){
    if(n==a[i][0]){
        printf("There are %d users in %d server\n",a[i][1],a[i][0]);
        break;
    }}
    if(i==5)
        printf("Server not found!\n");
}
