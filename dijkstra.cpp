#include<stdio.h>
#include<limits.h>
# define V 9
int minDistance(int dist[],bool setspt[]){
int v;
int min=INT_MAX,min_index;
for(v=0;v<V;v++){
if(setspt[v]==false&&dist[v]<=min){
min=dist[v],min_index=v;
}}
return min_index;}
int printSol(int dist[],int n){
printf("Vertex distance from source\n");
for(int i=0;i<V;i++){
printf("%d\t\t%d\n",i,dist[i]);}}
void dijkstra(int g[V][V],int src){
int dist[V];
bool setspt[V];
for(int i=0;i<V;i++)
dist[i]=INT_MAX;
setspt[i]=false;
dist[src]=0;
for(int c=0;c<V-1;c++){
int u=minDistance(dist,setspt);
setspt[u]=true;
for(int v=0;v<V;v++){
if(!setspt[v]&&g[u][v]&&dist[u]!=INT_MAX&&dist[u]+g[u][v]<dist[v])
dist[v]=dist[u]+g[u][v];}}
printSol(dist,V);}
int main(){
int g[V][V]={{0,4,0,0,0,0,0,8,0},{
4,0,8,0,0,0,0,11,0},
{0,8,0,7,0,4,0,0,2},
{0,0,7,0,9,14,0,0,0},
{0,0,0,9,0,10,0,0,0},
{0,0,4,0,10,0,2,0,0},
{0,0,0,14,0,2,0,1,6},
{8,11,0,0,0,0,1,0,7},
{0,0,2,0,0,0,6,7,0}};
dijkstra(g,0);
return 0;}
