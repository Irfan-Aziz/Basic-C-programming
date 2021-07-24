#include<stdio.h>
void quick_sort(int[],int,int);
int main(){
int a[50],size,i;
printf(" The size of array:\n");
scanf("%d",&size);
printf("The elements of array:\n");
for(i=0;i<size;i++){
scanf("%d",&a[i]);
}
quick_sort(a,0,size-1);
printf("after sorting...\n");
for(i=0;i<size;i++){
printf("%d\n",a[i]);
return 0;}}
void quick_sort(int a[],int beg,int end){
int p,i,j,temp;
if(beg<end){
p=beg;
i=beg;
j=end;
while(i<j){
    while(a[i]<=a[p]&&i<j)
        i++;
    while(a[j]>a[p])
        j--;
    if(i<j){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
}
temp=a[p];
a[p]=a[j];
a[j]=temp;
quick_sort(a,beg,j-1);
quick_sort(a,j+1,end);
}
}
