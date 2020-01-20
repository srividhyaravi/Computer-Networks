#include<stdio.h>
#include<stdio.h>
#define MIN(x,y) (x>y)?y:x

int main()
{
int cap,orate,i=0,drop,num,nsec,inp[10]={0},count,x;
printf("Enter the bucket capacity:");
scanf("%d",&cap);
printf("Enter the output rate:");
scanf("%d",&orate);
printf("Enter the no of inputs:");
scanf("%d",&num);
printf("Enter the inputs:");
for(i=0;i<num;i++)
{scanf("%d",&inp[i]);
}
nsec=i;
printf("Iterations		Incoming data		Outgoing data		Data in Bucket		Data dropped\n");
for(i=0;count||i<nsec;i++){
printf("\t%d",i+1);
printf("\t\t%d\t",inp[i]);
printf("\t\t%d\t",MIN((inp[i]+count),orate));
if((x=inp[i]+count-orate)>0)
{
if(x>cap)
{
count=cap;
drop=x-cap;
}
else
{
count=x;
drop=0;
}
}//end of if 
else
{
count=0;
drop=0;
}
printf("\t\t %d\t\t%d\n",count,drop);
}
return 0;

}
