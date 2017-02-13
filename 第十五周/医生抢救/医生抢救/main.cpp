#include<stdio.h>
#include<string.h>
struct patient
{
    double tem[7];
    int num;
    int time;
}a[20];
int main()
{
    int n;
    scanf("%d",&n);
    for(int j=0;j<7;j++)
        for(int i=0;i<n;i++)
        {
            scanf("%lf",&a[i].tem[j]);
        }
    for(int i=0;i<n;i++)
    {
        a[i].num=i+1;
        a[i].time=-1;
        double ave=0;
        for(int j=0;j<7;j++)
            ave+=a[i].tem[j];
        ave=ave/7;
        if(ave>=40||ave<=34)
            a[i].time=6;
        for(int j=0;j<7;j++)
        {
            if(a[i].tem[j]>=42||a[i].tem[j]<=32)
            {
                a[i].time=j;
                break;
            }
            if(j>=2&&((a[i].tem[j]>=41&&a[i].tem[j-1]>=41&&a[i].tem[j-2]>=41)||(a[i].tem[j]<=33&&a[i].tem[j-1]<=33&&a[i].tem[j-2]<=33)))
            {
                a[i].time=j;
                break;
            }
            if(j>=1&&(a[i].tem[j]-a[i].tem[j-1]>=2||a[i].tem[j]-a[i].tem[j-1]<=-2))
            {
                a[i].time=j;
                break;
            }
            double max=a[i].tem[0],min=a[i].tem[0];
            for(int p=1;p<=j;p++)
            {
                if(a[i].tem[p]>max)
                    max=a[i].tem[p];
                if(a[i].tem[p]<min)
                    min=a[i].tem[p];
            }
            if(max-min>=4)
            {
                a[i].time=j;
                break;
            }
        }
        
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j].time>a[j+1].time)
            {
                struct patient temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                
            }
        }
        
    }
    int judge=0;
    for(int i=0;i<n;i++)
    {
        if(a[i].time>-1)
        {
            judge=1;
            printf("%d %d:00\n",a[i].num,(a[i].time*4));
        }
    }
    if(judge==0)
        printf("None\n");
}