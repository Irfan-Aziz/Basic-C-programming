#include<stdio.h>
#include<stdlib.h>
int main(){
int open,element,head,*bkup;
int*nptr;
nptr=(int*)malloc(sizeof(int*));
scanf("%d\n",&nptr);
printf("%d\n",nptr);
printf("%d\n",&nptr);
head=nptr;
printf("%d\n",head);
int*npts;
npts=(int*)malloc(sizeof(int*));
scanf("%d\n",&npts);
printf("%d\n",npts);
printf("%d\n",&npts);
bkup=nptr;
int nptt;
nptt=(int*)malloc(sizeof(int* ));
scanf("%d\n",&nptt);
printf("%d\n",nptt);
printf("%d\n",&nptt);
nptt=NULL;
int*temp;
temp=&head;
if(temp=='\0')
    printf("%d",temp);
    else
        temp=bkup;
}
