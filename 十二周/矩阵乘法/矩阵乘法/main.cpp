#include<iostream>
using namespace std;
int main()
{
    int G;
    cin>>G;
    for(int i=0;i<G;i++)
    {
        int n,m,k;
        cin>>n>>m>>k;
        double a[100][100],b[100][100],c[100][100]={0};
        for(int j=0;j<n;j++)
            for(int p=0;p<m;p++)
                cin>>*(*(a+j)+p);
        for(int j=0;j<m;j++)
            for(int p=0;p<k;p++)
                cin>>*(*(b+j)+p);
        for(int j=0;j<n;j++)
            for(int p=0;p<k;p++)
            {
                for(int q=0;q<m;q++)
                {
                    c[j][p]+=*(*(a+j)+q)**(*(b+q)+p);
                }
            }
        for(int j=0;j<n;j++)
        {
            cout<<**(c+j);
            for(int p=1;p<k;p++)
                cout<<" "<<*(*(c+j)+p);
            cout<<endl;
            
        }
    }
}
