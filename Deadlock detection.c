#include<stdio.h>
#include<conio.h>

void main()
{
 int found,flag,l,p[100][100],pcs,rsc,c[100][100],i,j,k=1,m[100],r[100],a[100],temp[100],sum=0;
 //clrscr();
 printf("Enter total no of processes");
 scanf("%d",&pcs);
 printf("Enter total no of resources");
 scanf("%d",&rsc);
 printf("Enter claim (Max. Need) matrix\n");
 for(i=1;i<=pcs;i++)
 {
  printf("process %d:\n",i);
  for(j=1;j<=rsc;j++)
  scanf("%d",&c[i][j]);
 }
 printf("Enter allocation matrix\n");
 for(i=1;i<=pcs;i++)
 {
  printf("process %d:\n",i);
  for(j=1;j<=rsc;j++)
  scanf("%d",&p[i][j]);
 }
 printf("Enter resource vector (Total resources):\n");
 for(i=1;i<=rsc;i++)
 {
  scanf("%d",&r[i]);
 }
 printf("Enter availability vector (available resources):\n");
 for(i=1;i<=rsc;i++)
 {
  scanf("%d",&a[i]);
  temp[i]=a[i];
 }

 for(i=1;i<=pcs;i++)
 {
  sum=0;
  for(j=1;j<=rsc;j++)
  {
   sum+=p[i][j];
  }
  if(sum==0)
  {
   m[k]=i;
   k++;
  }
 }
 for(i=1;i<=pcs;i++)
 {
  for(l=1;l<k;l++)
  if(i!=m[l])
  {
   flag=1;
   for(j=1;j<=rsc ;j++)
   if(c[i][j]<temp[j])
   {
    flag=0;
    break;
   }
  }
  if(flag==1)
  {
   m[k]=i;
   k++;
   for(j=1;j<=rsc;j++)
   temp[j]+=p[i][j];
  }
 }
 printf("deadlock causing processes are:");
 for(j=1;j<=pcs;j++)
 {
  found=0;
  for(i=1;i<k;i++)
  {
   if(j==m[i])
   found=1;
  }
  if(found==0)
  printf("%d\t",j);
 }
 getch();
}
