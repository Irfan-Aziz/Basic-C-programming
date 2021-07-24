#include<bits/stdc++.h>

using namespace std;
int main()
{
    double a[5],b[6],x[6],y,z;
    for(int i=0;i<5;i++){
            cout<<"a["<<i+1<<"]:";
        cin>>a[i];}
    b[0]=1;
    b[1]=a[0]*b[0];
    b[2]=a[0]*b[1]+a[1]*b[0];
    b[3]=a[0]*b[2]+a[1]*b[1]+a[2]*b[0];
    b[4]=a[0]*b[3]+a[1]*b[2]+a[2]*b[1]+a[3]*b[0];
    b[5]=a[0]*b[4]+a[1]*b[3]+a[2]*b[2]+a[3]*b[1]+a[4]*b[0];
    for(int i=0;i<6;i++)
        cout<<"b["<<i+1<<"]="<<b[i]<<endl;
    for(int i=0;i<4;i++)
    {
        x[i]=b[i+1]/b[i+2];
    cout<<"x["<<i+1<<"]="<<x[i]<<endl;
    }
    for(int i=0;i<3;i++){
        y=x[i+1]-x[i];
        cout<<"y="<<y<<endl;
        if (abs(y)<0.001){
            z=x[i+1];
            break;
        }
        }
        cout<<"ROOT:"<<z;
}
