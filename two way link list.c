 #include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *par;
    struct node *add;
}*head,*tptr,*bkup;
void print()
{
    tptr=head;
    while(1)
    {
        printf("data's add=%d--data's par add=%d--data=%d--data's next add=%d\n",tptr,tptr->par,tptr->data,tptr->add);
        if(tptr->add==NULL)
            break;
            else
            tptr=tptr->add;
    }
}
struct node *search(int value)
{
    struct node *pos;
    pos=head;
    printf("please enter a seaching value:\npress -1 to insert data before head:\n");
    scanf("%d",&value);
    while(1){
    if(pos->data==value)
    {
        printf("IN FUNCTION\nsearching add=%d--data's par add=%d--data=%d--data's next add=%d\n",pos,pos->par,pos->data,pos->add);
        return pos;
    }
    if(pos->add==NULL)
        return 0;
        pos=pos->add;}
};
void insert(struct node *tmp)
{
    int a;
    struct node *nptr;
    if(tmp==0){
    printf("which data you want to insert:\n");
    scanf("%d",&a);
    nptr=(struct node*)malloc(sizeof(struct node));
    nptr->data=a;
    nptr->par=NULL;
    nptr->add=head;
    head->par=nptr;
    head=nptr;
    }
    else if(tmp->add==NULL)
    {
        printf("which data you want to insert:\n");
        scanf("%d",&a);
        nptr=(struct node*)malloc(sizeof(struct node));
        nptr->data=a;
        tmp->add=nptr;
        nptr->par=tmp;
        nptr->add=NULL;
    }
    else
    {
        printf("which data you want to insert:\n");
        scanf("%d",&a);
        nptr=(struct node*)malloc(sizeof(struct node));
        nptr->data=a;
        nptr->par=NULL;
        nptr->add=tmp;
        tmp->par=nptr;

    }
}
void del()
{
    struct node *pos;
    int data;
    printf("please enter data which you want to delete:\n");
    scanf("%d",&data);
    pos=head;

        if(head==NULL)
            printf("There is no link list.\n");
        else if(head->data==data){
            (pos->add)->par=NULL;
            head=head->add;}
            else{
        while(1)
        {
        if(pos->data==data){
            (pos->par)->add=pos->add;
            (pos->add)->par=pos->par;
            break;
        }
        pos=pos->add;
        }
            }
}
int main()
{
    struct node *nptr,*po;
    char ch;
    int l;
    nptr=(struct node*)malloc(sizeof(struct node));
    printf("please enter data:\n");
    scanf("%d",&nptr->data);
    nptr->par=NULL;
    nptr->add=NULL;
    bkup=nptr;
    head=nptr;
    while((ch!='N')&&(ch!='n'))
    {
        nptr=(struct node*)malloc(sizeof(struct node));
        printf("please enter data:\n");
        scanf("%d",&nptr->data);
        nptr->add=NULL;
        bkup->add=nptr;
        nptr->par=bkup;
        bkup=nptr;
        ch=getch();
    }
    print();
    po=search(l);
    if(po==0)
        printf("The data is not found\n");
    else
        printf("In main function\nThe seaching data's add=%d--data's par add=%d--data=%d--data's nxt add=%d\n",po,po->par,po->data,po->add);
        insert(po);
        print();
        del();
        print();
}
