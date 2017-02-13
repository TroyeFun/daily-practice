#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        char a[100]={0},b[100]={0};
        scanf("%s",a);
        scanf("%s",b);
        int l1=strlen(a),l2=strlen(b);
        char c[110]={0};
        for(int i=0;i<110;i++)
            c[i]='0';
        int l;
        if(l1<l2)l=l1;
        else l=l2;
        int t=0;
        for(t=0;t<l;t++)
        {
            int temp=a[l1-1-t]-'0'+b[l2-1-t]-'0'+c[t]-'0';
            if(temp>=2)c[t+1]='1';
            c[t]=temp%2+'0';
        }
        if(l1==l2)
        {
            if(c[t]=='0')
                for(int j=t-1;j>=0;j--)
                    printf("%c",c[j]);
            else
                for(int j=t;j>=0;j--)
                    printf("%c",c[j]);
        }
        else if(l1>l2)
        {
            for(t=t;t<l1;t++)
            {
                int temp=a[l1-1-t]-'0'+c[t]-'0';
                if(temp==2)c[t+1]='1';
                c[t]=temp%2+'0';
            }
            if(c[t]=='0')
                for(int j=t-1;j>=0;j--)
                    printf("%c",c[j]);
            else
                for(int j=t;j>=0;j--)
                    printf("%c",c[j]);
            
        }
        else if(l2>l1)
        {
            for(t=t;t<l2;t++)
            {
                int temp=b[l2-1-t]-'0'+c[t]-'0';
                if(temp==2)c[t+1]='1';
                c[t]=temp%2+'0';
            }
            if(c[t]=='0')
                for(int j=t-1;j>=0;j--)
                    printf("%c",c[j]);
            else
                for(int j=t;j>=0;j--)
                    printf("%c",c[j]);
            
        }
        printf("\n");
        
    }
}