#include<bits/stdc++.h>
using namespace std;
int main()
{
    double xy[100][100],h,k,stx,enx,sty,eny,p,a[100],ans,y1,y2=0,y3;
    int m=0,n=0;

    cout<<"enter the value of h and k\n";
    cin>>h>>k;
    cout<<"enter the starting and ending value of x\n";
    cin>>stx>>enx;
    cout<<"enter the starting and ending value of y\n";
    cin>>sty>>eny;
    for(double i=sty;i<=eny;i=i+h)
    {
        for(double j=stx;j<=enx;j=j+k)
        {
            xy[m][n]=exp(i+j);
            //cout<<xy[m][n];
            n=n+1;
        }
        m=m+1;
        n=0;
    }
    p=((enx-stx)/h)+1;
    for(int m=0;m<p;m++)
    {
        for(int n=0;n<p;n++)
        {
            printf("%.5f\t",xy[m][n]);

        }
        cout<<endl<<endl;
    }
    cout<<endl;
    int i=0;
     for(int m=0;m<p;m++)
    {
        for(int n=0;n<p;n++)
        {
           a[i]=xy[m][n];
           i++;
        }

    }


    y1=a[0]+a[i-1];

    for(int q=1;q<=i-2;q++)
        y2+=a[q];

     ans=(h*k/4)*(y1+2*y2);
     cout<<"By trapezoidal rule answer= "<<ans<<endl;
     y1=0;
     y2=0;
     ans=0;
     y1=a[0]+a[6]+a[2]+a[i-1];
     y2=4*(a[1]+a[7]+a[3]+a[5])+16*a[4];
     ans=(h*k/9)*(y1+y2);
     cout<<"By simpson's rule answer= "<<ans<<endl;

    return 0;

}

