 #include<stdio.h>
 int a[100],n;
 int main(){
 int c,num;
 n=0;
 while(1){
 printf("1.insert...\n");
 printf("2.delete...\n");
 printf("3.display...\n");
 printf("Enter your choice\n");
 scanf("%d",&c);
 switch(c){
 case 1:
 printf("Enter number to insert...");
 scanf("%d",&num);
 insert(num,n);
 n=n+1;
 break;
 case 2:
 printf("Enter number to delete...");
 scanf("%d",&num);
 del(num);
 break;
 case 3:
 display();
 break;
 }
 }
 }
 display(){
 int i;
 if(n==0){
 printf("Heap is empty...\n");
 return;}
 for(i=0;i<=n;i++){
 printf("%d",a[i]);
 printf("\n");}
 }
 insert(int num,int loc){
 int par;
 while(loc>0){
 par=(loc-1)/2;
 if(num<=a[par]){
 a[loc]=a[par];
 loc=par;
 }
 a[0]=num;
 }}
 del(int num)    {
 int lc,rc,i,temp,par;
 for(i=0;i<n;i++){
 if(num==a[i])
 break;
 }
 if(num!=a[i]){
 printf ("%d not found in heap\n",num);
 return;}
 par=(i-1)/2;
 if(a[i]> a[par]){
 insert(a[i],i);
 return;}
 lc=2*i+1;
 rc=2*i+2;
 while(rc<n){
 if(a[i]>=a[lc]&&a[i]>=a[rc])
 return;
 if(a[rc]<a[lc]){
 temp=a[i];
 a[i]=a[lc];
 a[lc]=temp;
 i=lc;
 }
 else{
 temp=a[i];
 a[i]=a[rc];
 a[rc]=temp;
 i=rc;
 }
 lc=2*i+1;
 rc=2*i+2;
 }
 if(lc==n-1&&a[i]<a[lc]){
 temp=a[i];
 a[i]=a[lc];
 a[lc]=temp;
 }}
