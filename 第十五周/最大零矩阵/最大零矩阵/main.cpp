#include<iostream>
using namespace std;
int a[100][100];
bool judge(int i,int j,int l)
{
    for(int t=j;t<j+l;t++)
        if(a[i][t]!=0)
            return 0;
    return 1;
}
int main()
{
    int m,n;
    cin>>m>>n;
    int max=0;
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
        {
            
            cin>>a[i][j];
        }
    for(int x=0;x<m;x++)
        for(int y=0;y<n;y++)
        {
            if(a[x][y]==0)
            {
                for(int l=1;y+l-1<n;l++)
                {
                    int j=0;
                    for(j=1;j+x-1<m;j++)
                    {
                        if(judge(x+j-1,y,l)==0)
                            break;
                    }
                    if(l*(j-1)>max)max=l*(j-1);
                }
            }
        }
    cout<<max<<endl;
}