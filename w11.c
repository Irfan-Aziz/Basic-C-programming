#include<stdio.h>
int main(){
int i=0,j,k;
scanf("%d",&k);
printf("Enter the number of your choice(1-5)\n");

do{
do{
    scanf("%d",&j);
if(j==1||j==2||j==3||j==4||j==5)
    break;
    printf("Enter the valid number\n");


}while(j!=1&&j!=2&&j!=3&&j!=4&&j!=5);
printf("Mailing list menu:\n");
if(j==1)
    printf("%d. Enter the addresses\n",j);
    else if(j==2)
    printf("%d. Delete the addresses\n",j);
    else if(j==3)
    printf("%d. Search the list\n",j);
    else if(j==4)
    printf("%d. Print the list\n",j);
    else if(j==5)
    printf("%d. Quit\n",j);
    i++;}while(i<k);
}
