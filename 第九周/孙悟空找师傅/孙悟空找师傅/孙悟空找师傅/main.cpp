#include<iostream>
using namespace std;
int a[100][100],b=0;
void search(int i,int j,int h,int l)
{
    int m=i+1,n=i-1,x=j+1,y=j-1;
    if(a[n][j]==3||a[m][j]==3||a[i][x]==3||a[i][y]==3){cout<<"Yes";b=1;}
    else {
        if(m<h&&a[m][j]==0){a[m][j]=1;search(m,j,h,l);}
        if(n>=0&&a[n][j]==0){a[n][j]=1;search(n,j,h,l);}
        if(x<l&&a[i][x]==0){a[i][x]=1;search(i,x,h,l);}
        if(y>=0&&a[i][y]==0){a[i][y]=1;search(i,y,h,l);}
    }
}
int main()
{
    int h,l;
    int x,y;
    cin>>h>>l;
    for(int i=0;i<h;i++)
        for(int j=0;j<l;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==2)
            {
                x=i;y=j;
            }
        }
    for(int j=0;j<l+1;j++)
        a[h][j]=4;
    for(int i=0;i<h;i++)
        a[i][l]=4;
    search(x,y,h,l);
    if(b==0)cout<<"No";
}

