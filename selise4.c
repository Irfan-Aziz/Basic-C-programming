#include<stdio.h>
#include<math.h>
//#include<bits/stdc++.h>
int main(){
int i,j,k,start,mid,end,p=10;
double ans,in;
scanf("%d",&k);
start=0,end=k;

while(start<=end){
mid=(start+end)/2;

if(mid*mid==k){
ans=mid;
//printf("%d")
break;}
if(mid*mid>k){
end=mid-1;
//ans=mid;
}
if(mid*mid<k){
start=mid+1;
ans=mid;
}}
printf("%0.2f\n",ans);
in=0.1;
for(i=0;i<p;i++){
while(ans*ans<=k){
ans=ans+in;}
ans=ans-in;
in=in/10;
}
printf("%.10llf\n",ans);
}
