#include<stdio.h>
#include<stdlib.h>
#define MAX 50000
int insert_prio(int);
void delete_prio();
int pri_que[MAX],a[MAX];
int front=-1,rear=-1;
int arr[MAX],n=0;
int insert_heap(int);
void del_heap();
int unsrted[MAX],num=0;
int main()
{
    int i,data,ch;
    FILE *fb;
    srand(time(NULL));
    fb=fopen("P_QUEUE.txt","w");
    for(i=0;i<MAX;i++){
        data=rand()%MAX+1;
        fprintf(fb,"%d ",data);
        a[i]=data;
    }
    fclose(fb);
    while(1){
        printf("Enter choice\n1.priority (unsorted)\n2.priority (sorted)\n3.heap\n");
    scanf("%d",&ch);
    switch(ch){
      case 1:unsorted();break;
      case 2 :priority_queue();break;
      case 3:heap(); break;
      default :break;}
    }
    return 0;
}
int priority_queue()
{
    int i,data,ch;
    double t1,t2,t;
    t1=0,t2=0;
    printf("\nEnter your choice : \n");
    printf("1.Insert\n2.Delete\n3.Exit\n");
    scanf("%d",&ch);
    t1=clock();
    switch (ch){
        case 1: for(i=0;i<MAX;i++){
                data=a[i];
                insert_prio(data);}
                break;
        case 2: i=0;
                while(i<MAX){
                delete_prio();
                i++;}
                break;
        default :exit(0);
            }
    t2=clock();
    t=t2-t1;
    printf("Required time:%lf\n",t);
}
int insert_prio(int data){
    int i,j;
    if ((front==-1) && (rear==-1)){
        front++;
        rear++;
        pri_que[rear]=data;
        return;
    }
    else{
    for (i=0;i<=rear;i++){
        if (data>=pri_que[i]){
            for (j=rear+1;j>i;j--){
                pri_que[j]=pri_que[j-1];
            } break;
        }
    }
    pri_que[i]=data;
        rear++;
        return;
    }
}
void delete_prio(){
    int i;
    a[0]=0;
    for (i=0;i<rear;i++){
         pri_que[i]=pri_que[i + 1];}
    rear--;
    if (rear==-1)
        front=-1;
}
int heap()
{
    int i,data,ch;
    double t1,t2,t;
    t1=0,t2=0;
    printf("\nEnter your choice : \n");
    printf("1.Insert\n2.Delete\n3.Exit\n");
    scanf("%d",&ch);
    t1=clock();
    switch (ch){
        case 1: for(i=0;i<MAX;i++){
                data=a[i];
                insert_heap(data);}
                break;
        case 2: i=0;
                while(i<MAX){
                del_heap();
                i++;}
                break;
        default : break;}
    t2=clock();
    t=t2-t1;
    printf("Required time:%lf\n",t);
}
int insert_heap(int data)
{
    int root,temp,pos;
    if(n==0){
        arr[0]=data;
        n++;
        return;}
    arr[n]=data;
    pos=n;
    while(pos>0){
    root=(pos-1)/2;
    if(arr[pos]<=arr[root]){
        arr[pos]=data;
         break;
    }
    if(arr[pos]>arr[root]){
        temp=arr[root];
        arr[root]=arr[pos];
        arr[pos]=temp;
        pos=root;}
    }
       n++;
}
void del_heap()
{
    int root=0,left,right,temp,pos;
    arr[0]=arr[n-1];
    arr[n-1]=0;
    n--;
    while(1){
        left=root*2+1;
        right=root*2+2;
        if(arr[left]<arr[right])
            pos=right;
        else pos=left;
        if(arr[root]>=arr[pos])
            return;
        else{
            temp=arr[root];
            arr[root]=arr[pos];
            arr[pos]=temp;
            root=pos;
        }
    }
}
int unsorted()
{
    int i,data,ch;
    double t1,t2,t;
    t1=0,t2=0;
    printf("\nEnter your choice : \n");
    printf("1.Insert\n2.Delete\n3.Exit\n");
    scanf("%d",&ch);
    t1=clock();
    switch (ch){
        case 1: for(i=0;i<MAX;i++){
                data=a[i];
                insert_un(data);}
                break;
        case 2: i=0;
                while(i<MAX){
                del_un();
                i++;}
                break;
        default :break;
            }
    t2=clock();
    t=t2-t1;
    printf("Required time:%lf\n",t);
}
int insert_un(data)
{
    unsrted[num]=data;
    num++;
}
int del_un(data)
{
    int i,max,pos;
    max=unsrted[0];
    for(i=0;i<num;i++){
        if(max<unsrted[i]){
            max=unsrted[i];
            pos=i;}
    }
    for(i=pos;i<num-1;i++){
        unsrted[i]=unsrted[i+1];
    }
    unsrted[num-1]=0;
    num--;
}
