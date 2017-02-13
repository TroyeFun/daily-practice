#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    int num=0;
    int ba[100];
    for(int i1=0;i1<8;i1++)
    {
        for(int i2=0;i2<8;i2++)
        {
            if(i2!=i1)
            {
                for(int i3=0;i3<8;i3++)
                {
                    if(i3!=i2&&i3!=i1)
                    {
                        for(int i4=0;i4<8;i4++)
                        {
                            if(i4!=i3&&i4!=i2&&i4!=i1)
                            {
                                for(int i5=0;i5<8;i5++)
                                {
                                    if(i5!=i4&&i5!=i3&&i5!=i2&&i5!=i1)
                                    {
                                        for(int i6=0;i6<8;i6++)
                                        {
                                            if(i6!=i5&&i6!=i4&&i6!=i3&&i6!=i2&&i6!=i1)
                                            {
                                                for(int i7=0;i7<8;i7++)
                                                {
                                                    if(i7!=i6&&i7!=i5&&i7!=i4&&i7!=i3&&i7!=i2&&i7!=i1)
                                                    {
                                                        int i8=28-i1-i2-i3-i4-i5-i6-i7;
                                                        int a[8][8]={0};
                                                        a[0][i1]=1;a[1][i2]=1;a[2][i3]=1;a[3][i4]=1;a[4][i5]=1;a[5][i6]=1;a[6][i7]=1;a[7][i8]=1;
                                                        int judge=0;
                                                        for(int m=0;m<8;m++)
                                                        {
                                                            for(int n=0;n<8;n++)
                                                            {
                                                                if(a[m][n]==1)
                                                                {
                                                                    for(int t=1;t<=7;t++)
                                                                    {
                                                                        if((m+t<8&&n+t<8&&a[m+t][n+t]==1)||(m-t>=0&&n+t<8&&a[m-t][n+t]==1)||(m-t>=0&&n-t>=0&&a[m-t][n-t]==1)||(m+t<8&&n-t>=0&&a[m+t][n-t]==1))
                                                                        {
                                                                            judge=1;
                                                                            break;
                                                                        }
                                                                    }
                                                                }
                                                                if(judge==1)break;
                                                            }
                                                            if(judge==1)break;
                                                        }
                                                        if(judge==0)
                                                        {
                                                            ba[num]=(i1+1)*10000000+(i2+1)*1000000+(i3+1)*100000+(i4+1)*10000+(i5+1)*1000+(i6+1)*100+(i7+1)*10+i8+1;
                                                            num++;
                                                        }
                                                        
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int j=0;
        cin>>j;
        cout<<ba[j-1]<<endl;
    }
}