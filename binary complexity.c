#include<stdio.h>

#include<time.h>
#define n 1000
double linear();
double binary();

int main(){
FILE *best,*avg,*wrst;
int num,i,j,k,b[n],a[n],w[n];
double t1,t2,t3,t4,t5,t6,t7,t8,t9;
best=fopen("Best.txt","w");
avg=fopen("Avg.txt","w");
wrst=fopen("Wrst.txt","w");
srand(time(NULL));
j=n;
for(i=1;i<=n;i++){
num=rand()%1000+1;
fprintf(best,"%d\n",i);
fprintf(avg,"%d\n",num);
fprintf(wrst,"%d\n",j);
j--;}
fclose(best);
fclose(avg);
fclose(wrst);
best=fopen("Best.txt","r");
avg=fopen("Avg.txt","r");
wrst=fopen("Wrst.txt","r");
for(i=0;i<n;i++){
fscanf(best,"%d\n",&b[i]);
fscanf(avg,"%d\n",&a[i]);
fscanf(wrst,"%d\n",&w[i]);
}
fclose(best);
fclose(avg);
fclose(wrst);
t1=bubble(b);
t2=bubble(a);
t3=bubble(w);
best=fopen("Best.txt","r");
avg=fopen("Avg.txt","r");
wrst=fopen("Wrst.txt","r");
for(i=0;i<n;i++){
fscanf(best,"%d\n",&b[i]);
fscanf(avg,"%d\n",&a[i]);
fscanf(wrst,"%d\n",&w[i]);
fclose(best);
fclose(avg);
fclose(wrst);

t4=selection(b);
t5=selection(a);
t6=selection(w);
best=fopen("Best.txt","r");
avg=fopen("Avg.txt","r");
wrst=fopen("Wrst.txt","r");
for(i=0;i<n;i++){
fscanf(best,"%d\n",&b[i]);
fscanf(avg,"%d\n",&a[i]);
fscanf(wrst,"%d\n",&w[i]);
fclose(best);
fclose(avg);
fclose(wrst);
t7=insertion(b);
t8=insertion(a);
t9=insertion(w);
best=fopen("Best.txt","r");
avg=fopen("Avg.txt","r");
wrst=fopen("Wrst.txt","r");
for(i=0;i<n;i++){
fscanf(best,"%d\n",&b[i]);
fscanf(avg,"%d\n",&a[i]);
fscanf(wrst,"%d\n",&w[i]);
fclose(best);
fclose(avg);
fclose(wrst);

double binary(int a[n]){
int c,first,last,middle,search,n1;
double start=0,end=0,tm=0;
start=clock();
/*printf("Enter the number of element\n");
scanf("%d",&n);
printf("Enter the values\n");
for(c=0;c<n;c++){
scanf("%d\n",&a[c]);}
printf("Enter the value to find\n");
scanf("%d",&search);*/
first=0;
last=n1-1;
middle=(first+last)/2;
while(first<=last){
if(a[middle]<search){
first=middle+1;}
else if(a[middle]==search){
//printf("%d is found at %d\n",search,a[middle]);
break;}
else
last=middle-1;
middle=(first+last)/2;}
if(first>last){
//printf("Not found");
break;}
end=clock();
tm=end-start;
return tm;}
