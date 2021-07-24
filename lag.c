#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x[100],y[100],sum=0,yv;
    int n;
    cout<<"Enter the number of the terms of the table: "<<endl;
    cin>>n;
    cout<<"enter the value of x and corresponding y"<<endl;
    for(int m=0;m<n;m++)
    {
       cin>>x[m];
       cin>>y[m];

    }
    cout<<"Enter the value of the y to find the respective value of x"<<endl;
    cin>>yv;

    for(int i=0;i<n;i++)
    {
         double r=1,s=1;
         for(int j=0;j<n;j++)
         {
             if(j!=i)
             {
                 r=r*(yv-y[j]);
                 s=s*(y[i]-y[j]);
             }
         }
         sum+=(r/s)*x[i];
    }

    cout<<"x= "<<sum;
    return 0;
}
