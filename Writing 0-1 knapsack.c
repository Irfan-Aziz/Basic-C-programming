#include<stdio.h>
#include<time.h>
int max(int a,int b){
return(a>b)?a:b;}
int knapsack(int W,int wt[],int val[],int n){
    //clock_t begin=clock();
if(n==0||W==0)
return 0;
if(wt[n-1]>W)
return knapsack(W,wt,val,n-1);
else
return max(val[n-1]+knapsack(W-wt[n-1],wt,val,n-1),
knapsack(W,wt,val,n-1));
//clock_t end=clock();
}
int main(){
  //double begin,end,t;
 clock_t begin=clock();
int val[]={60,100,120};
int wt[]={10,20,30};
int W=50;
int n=sizeof(val);
//printf("%d\n%d\n",val,wt);
clock_t end=clock();
double t=(double)(end-begin)/CLOCKS_PER_SEC;
printf("%lf\n",t);
return 0;}
