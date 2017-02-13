#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        char line1[10000],line2[10000];
        cin>>line1>>line2;
        int len=strlen(line1)<strlen(line2)?strlen(line1):strlen(line2);
        bool judge=0;
        while(len>=0){
            for(int j=0;j<strlen(line1)-len+1;j++)
            {
                
                char temp1[10000]={'\0'},temp2[10000]={'\0'};
                for(int k=0;k<len;k++)
                {
                    temp1[k]=line1[j+k];
                }
                for(int k=0;k<strlen(line2)-len+1;k++)
                {
                    for(int l=0;l<len;l++)
                        temp2[l]=line2[l+k];
                    if(strcmp(temp1,temp2)==0)
                    {
                        judge=1;
                        break;
                    }
                }
                if(judge==1)break;
                
            }
            if(judge==1)
            {
                cout<<len<<endl;
                break;
            }
            else
                len--;
        }
        if(judge==0)cout<<'0'<<endl;
    }
}