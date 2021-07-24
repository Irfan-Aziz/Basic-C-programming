#include<stdio.h>
#include<time.h>
#define n 1000
double bubble();
double selection();
double insertion();
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
printf("Bubble sort\nbest case %lf\naverage case %lf\nworst case %lf\n\n\n",t1,t2,t3);
printf("Selection sort\nbest case %lf\naverage case %lf\nworst case %lf\n\n\n",t4,t5,t6);
printf("Insertion sort\nbest case %lf\naverage case %lf\nworst case %lf\n\n\n",t7,t8,t9);
return 0;}
double bubble(int x[n]){
int i,j,temp,count=0;
double start=0,end=0,tm=0;
start=clock();
for(i=0;i<n;i++){
count++;
for(j=0;j<n-1;j++){
count++;
if(x[j]>x[j+1]){
count++;
temp=x[j+1];
x[j+1]=x[j];
x[j]=temp;}}}
end=clock();
tm=(end-start);
return tm;}
double selection(int y[n]){
int i,j,temp,min,count=0;
double start=0,end=0,tm=0;
start=clock();
for(i=0;i<n-1;i++){
count++;
min=i;
for(j=i+1;j<n;j++){
count++;
if(y[min]>y[j]){
count++;
min=j;}}
temp=y[min];
y[min]=y[i];
y[i]=temp;}
end=clock();
tm=end-start;
return tm;}
/*double insertion(int z[n]){
int i,j,temp,count=0;
double start=0,end=0,tm=0;
start=clock();
for(i=1;i<n;i++){
count++;
temp=z[i];
j=i-1;
while(j>=0&&z[j]>temp){
count++;
z[j+1]=z[j];
j--;}
z[j+1]=temp;}
end=clock();
tm=(end-start);
return tm;}*/
