/*
 #############################
 #   |   #   |   #   |   |   #
 #####---#####---#---#####---#
 #   #   |   #   #   #   #   #
 #---#####---#####---#####---#
 #   |   |   #   #   #   #   #
 #---#########---#####---#---#
 #   #   |   |   |   |   #   #
 #############################
 */
/*  1-w,,,2-n,,,4-e,,,8-s,,,
	3-w,n,,,5-w,e,,,9-w,s,,,6-n,e,,,10-n,s,,,12-e,s,,,
	7-w,n,e,,,11-w,n,s,,,13-w,e,s,,,14-n,e,s
	15-w,n,e,s
 */
/*
 
 
 */
#include<iostream>
using namespace std;
int a[50][50],m,n,sum=0;
void search(int x,int y)
{
    if(a[x][y]!=-1)
    {
        sum++;
        switch(a[x][y])
        {
            case 0:a[x][y]=-1;search(x-1,y);search(x+1,y);search(x,y-1);search(x,y+1);break;
            case 1:a[x][y]=-1;search(x-1,y);search(x+1,y);search(x,y+1);break;
            case 2:a[x][y]=-1;search(x+1,y);search(x,y-1);search(x,y+1);break;
            case 4:a[x][y]=-1;search(x-1,y);search(x+1,y);search(x,y-1);break;
            case 8:a[x][y]=-1;search(x-1,y);search(x,y-1);search(x,y+1);break;
            case 3:a[x][y]=-1;search(x+1,y);search(x,y+1);break;
            case 5:a[x][y]=-1;search(x-1,y);search(x+1,y);break;
            case 9:a[x][y]=-1;search(x-1,y);search(x,y+1);break;
            case 6:a[x][y]=-1;search(x+1,y);search(x,y-1);break;
            case 10:a[x][y]=-1;search(x,y+1);search(x,y-1);break;
            case 12:a[x][y]=-1;search(x-1,y);search(x,y-1);break;
            case 7:a[x][y]=-1;search(x+1,y);break;
            case 11:a[x][y]=-1;search(x,y+1);break;
            case 13:a[x][y]=-1;search(x-1,y);break;
            case 14:a[x][y]=-1;search(x,y-1);break;
            case 15:a[x][y]=-1;break;
        }
    }
    return;
}

int main()
{
    cin>>m>>n;
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    int room=0;
    int max=0;
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
        {
            if(a[i][j]!=-1)
            {
                room++;
                sum=0;
                search(i,j);
                if(max<sum)max=sum;
            }
        }
    cout<<room<<endl<<max<<endl;
    
}
/*
 14
 15
 11 14 3 6 3 6 3 6 3 6 3 6 11 2 6
 3 10 12 9 12 9 12 9 12 9 12 9 6 1 4
 13 7 11 10 10 10 10 10 10 14 11 6 5 1 4
 11 4 3 10 10 10 10 10 10 10 6 5 13 1 4
 7 13 5 7 11 10 2 10 14 7 5 13 7 9 12
 1 14 5 1 10 14 5 11 10 4 9 6 1 10 6
 13 7 5 5 3 10 8 10 6 5 3 12 9 10 12
 11 4 5 13 5 3 10 6 5 13 5 3 10 10 6
 7 13 1 10 4 1 10 4 1 10 4 5 3 10 12
 1 14 5 7 5 9 10 12 5 7 5 5 9 10 6
 13 7 13 5 9 10 2 10 12 13 13 5 3 10 12
 7 5 15 9 10 14 5 11 14 11 14 5 9 10 6
 5 13 7 7 11 10 8 10 14 7 3 12 3 10 12
 13 15 13 13 11 10 14 11 10 12 9 10 8 10 14
 */