#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n,a[102][102]={0};
    cin>>n;
    int i=0,j=0;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            cin>>a[i][j];
    if(n==1)cout<<a[1][1];
    else{
        int x=1,y=1;
        cout<<a[x][y];
        a[x][y]=0;
        y++;
        if(n%2==0)
        {
            i=n/2+1;
            j=n/2;
            cout<<" "<<a[i][j];
            a[i][j]=-1;
            j++;
            
        }
        else
        {
            i=n/2+1;
            j=n/2+1;
            cout<<" "<<a[i][j];
            a[i][j]=-1;
            j--;
            
        }
        
        
        while(1)
        {
            cout<<" "<<a[x][y];
            a[x][y]=0;
            if(a[x-1][y]<=0&&a[x+1][y]<=0&&a[x][y+1]<=0&&a[x][y-1]<=0)break;
            else if(a[x][y-1]==0&&a[x-1][y]==0)
            {
                if(a[x][y+1]!=0)y++;
                else x++;
            }
            else if(a[x-1][y]==0&&a[x][y+1]==0)
            {
                if(a[x+1][y]!=0)x++;
                else y--;
                
            }
            else if(a[x][y+1]==0&&a[x+1][y]==0)
            {
                if(a[x][y-1]!=0)y--;
                else x--;
            }
            else if(a[x+1][y]==0&&a[x][y-1]==0)
            {
                if(a[x-1][y]!=0)x--;
                else y++;
            }
            cout<<" "<<a[i][j];
            a[i][j]=-1;
            if(a[i-1][j]<=0&&a[i+1][j]<=0&&a[i][j+1]<=0&&a[i][j-1]<=0)break;
            else if(a[i][j+1]==-1)
            {
                if(a[i+1][j]!=-1)i++;
                else j--;
                
            }
            else if(a[i-1][j]==-1)
            {
                if(a[i][j+1]!=-1)j++;
                else i++;
            }
            else if(a[i][j-1]==-1)
            {
                if(a[i-1][j]!=-1)i--;
                else j++;
            }
            else if(a[i+1][j]==-1)
            {
                if(a[i][j-1]!=-1)j--;
                else i--;
            }
            
        }
    }
    
    
    
    
    
    
}