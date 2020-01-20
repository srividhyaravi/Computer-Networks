#include<stdio.h>
#define infinity 999
int i;
void dij(int n,int v,int cost[20][20],int dist[])
{
int count,u,w,min,flag[10];
for(i=1;i<=n;i++)
flag[i]=0,dist[i]=cost[v][i];
count=2;
while(count<=n)
{
min=99;
for(w=1;w<=n;w++)
if(dist[w]<min && !flag[w])
min=dist[w],u=w;
flag[u]=1;
count++;
for(w=1;w<=n;w++)
if(dist[u]+cost[u][w]<dist[w] && !flag[w])
dist[w]=dist[u]+cost[u][w];
}
}
int main()
{
int i,j,n,v,cost[20][20],dist[10],count,min,flag[10];
printf("entre no of nodes:\n");
scanf("%d",&n);
printf("enter cost matrix");
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
scanf("%d",&cost[i][j]);
if(cost[i][j]==0)
cost[i][j]=infinity;
}
}
printf("enter the source node\n");
scanf("%d",&v);
dij(n,v,cost,dist);
for(i=1;i<=n;i++)
if(i!=v)
printf("%d->%d dist %d\n",v,i,dist[i]);

}
