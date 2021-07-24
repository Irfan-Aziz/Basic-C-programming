#include<stdio.h>
#include<conio.h>
void main(){
    //clrscr();
int a[4],b[4],w[4],t[4],g[4],p[4],pr[1],i,j,n,k,temp,pos,q,limit,FLAG,total,tmp[4];
float avg,x,y;
for(i=0;i<4;i++){
    a[i]=0;
    b[i]=0;
    w[i]=0;
    t[i]=0;
    g[i]=0;
    p[i]=0;
}
printf("Enter the number of processes\n");
scanf("%d",&n);
printf("Enter the arrival times of processes\n");
for(i=0;i<n;i++){
scanf("%d",&a[i]);}
printf("Enter the bus times of processes\n");
for(i=0;i<n;i++){
printf("p[%d]",i+1);
scanf("%d",&b[i]);
p[i]=i+1;}

printf("Enter your choice of scheduling\n");
printf("Press 1 for FCFS,2 for SJF, 3 for Priority scheduling, 4 for Round Robin Scheduling\n");
scanf("%d",&j);
switch(j){
    case 1:

printf("You have chosen 'Non-preemptive FCFS'\n");
g[0]=0;
for(i=0;i<n;i++){
g[i+1]=g[i]+b[i];}
for(i=0;i<n;i++){
w[i]=g[i]-a[i];
t[i]=g[i+1]-a[i];
x=x+w[i];
y=y+t[i];}

printf("\tProcess\tWaiting time\tBus time\tTurn around time\n");
for(i=0;i<n;i++){
printf("\tp[%d]\t\t%d\t\t%d\t\t%d\n",i+1,w[i],b[i],t[i]);
}

printf("Average waiting time: %f",x/n);
printf("Average turn around time: %f",y/n);
break;
    case 2:


printf("You have chosen 'SJF'\n");

for(i=0;i<n-1;i++){
        for(k=0;k<n-i-1;k++){
            if(b[k]>b[k+1]){
                temp=b[k];
                b[k]=b[k+1];
                b[k+1]=temp;

            }
        }

}
g[0]=0;
for(i=0;i<n;i++){
g[i+1]=g[i]+b[i];}
for(i=0;i<n;i++){
w[i]=g[i]-a[i];
t[i]=g[i+1]-a[i];
x=x+w[i];
y=y+t[i];}

printf("\tProcess\tWaiting time\tBus time\tTurn around time\n");
for(i=0;i<n;i++){
printf("\tp[%d]\t%d\t%d\t%d\n",p[i],w[i],b[i],t[i]);
}

printf("Average waiting time: %f",x/n);
printf("Average turn around time: %f",y/n);
break;
    case 3:
        printf("You have selected 'non_preemptive priority scheduling\n");
        printf("Enter Priority for the processes\n");
        for(i=0;i<n;i++){
            scanf("%d",&pr[i]);
        }
        for(i=0;i<n;i++){
            pos=i;
            for(k=i+1;k<n;k++){
                if(pr[k]<pr[pos]){
                    pos=k;
                }
            }
            temp=pr[i];
            pr[i]=pr[pos];
            pr[pos]=temp;
            temp=b[i];
            b[i]=b[pos];
            b[pos]=temp;
            temp=p[i];
            p[i]=p[pos];
            p[pos]=temp;


        }
        g[0]=0;
for(i=0;i<n;i++){
g[i+1]=g[i]+b[i];}
for(i=0;i<n;i++){
w[i]=g[i]-a[i];
t[i]=g[i+1]-a[i];
x=x+w[i];
y=y+t[i];}

printf("\tProcess\tWaiting time\tBus time\tTurn around time\n");
for(i=0;i<n;i++){
printf("\tp[%d]\t%d\t%d\t%d\n",p[i],w[i],b[i],t[i]);
}

printf("Average waiting time: %f",x/n);
printf("Average turn around time: %f",y/n);
break;
    case 4:
        printf("You have chosen 'Round Robin Scheduling'\n");
        printf("Enter time quantum: ");
        scanf("%d",&q);
        total=0;
        for(i=0;i<n;i++){
            tmp[i]=b[i];
        }
        for(i=0;i<n;i++){
                if(tmp[i]<=q&& tmp[i]>0){
                        total=total+tmp[i];
                b[i]=0;
                FLAG=1;}


                else if(b[i]>0){
                    tmp[i]=tmp[i]-q;
                    total=total+q;

                }
                if(tmp[i]==0 && FLAG==1){
                printf("\tp[%d]\t%d\t%d\t%d\n",p[i],total-a[i],b[i],total-a[i]-b[i]);
}

                }

        }

}
