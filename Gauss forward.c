#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
int num,i,j,k;
float x,ax[10],ay[10],nr,dr,h,p,diff[20][20],y1,y2,y3,y4,y=0;
//clrscr();
printf("Gauss forward difference formula\n");
printf("Enter the number of terms\n");
scanf("%d",&num);
printf("Enter the value in the form of x\n");
for(i=0;i<num;i++){
    printf("Enter the value of x%d",i+1);
    scanf("%f",&ax[i]);}
    for(i=0;i<num;i++){
        printf("Enter the value of y%d",i+1);
        scanf("%f",&ay[i]);
    }
    printf("Enter the value of x for which the value of y is wanted\n");
    scanf("%f",&x);
    h=ax[1]-ax[0];
    for(i=0;i<num;i++){
            h=ax[i]-ax[i-1];
        diff[i][j]=diff[i+1][j-1]-diff[i][j-1];
        i=0;
        do{
            i++;
        //h=ax[i]-ax[i-1];}
        }while(ax[i]<x);
        //h=ax[i]-ax[i-1];
        i--;
        p=(x-ax[i])/h;
        y1=p*diff[i][1];
        y2=p*(p-1)*diff[i-1][2]/3;
        y3=(p+1)*p*(p-1)*diff[i-2][3]/6;
        y4=(p+1)*p*(p-1)*(p-2)*diff[i-3][4]/24;
        y=ay[i]+y1+y2+y3+y4;
        printf("when x=%6.4f,y=%6.81",x,y);
        printf("prss enter to exit\n");

    }
}
