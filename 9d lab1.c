#include<stdio.h>
#include<string.h>
#include<malloc.h>
struct node{
struct node *prnt;
int data;
struct node *next;
};
int main()
{
struct node *nptr1,*nptr2;
int data1,data2;
scanf("%d",&data1);
scanf("%d",&data2);
nptr1=(struct node*)malloc(sizeof(struct node));
nptr2=(struct node*)malloc(sizeof(struct node));
nptr1->data=data1;
nptr2->data=data2;
nptr1->next=nptr2;
nptr2->prnt=nptr1;
nptr1->prnt=NULL;
nptr2->next=NULL;
printf("parents\t address\t data\t next\t \n");
printf("%d\t %d\t %d\t %d\t \n",nptr1->prnt,nptr1->data,nptr1,nptr1->next);
printf("%d\t %d\t %d\t %d\t \n",nptr2->prnt,nptr2->data,nptr2,nptr2->next);
}
