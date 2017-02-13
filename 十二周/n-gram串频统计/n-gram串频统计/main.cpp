#include<iostream>
using namespace std;
int main()
{
    char b[500][5] = { '\0' }, a[500] = { '\0' };
    int n, i, j, geshu = 0, num[500] = { 0 };
    cin >> n;
    cin >> a;
    for (i = 0; i < strlen(a) - n+1 ;i++)
    {
        char temp[5] = { '\0' };
        for (j = 0; j < n; j++)
        {
            temp[j] = a[i + j];
        }
        int k = 0;
        for (k = 0; k < geshu; k++)
        {
            if (strcmp(temp, b[k]) == 0)
            {
                num[k]++;
                break;
            }
        }
        if (k == geshu)
        {
            for (j = 0; j < n; j++)
            {
                b[geshu][j]=temp[j];
            }
            num[geshu]++;
            geshu++;
        }
    }
    int Max = 0;
    for (i = 0; i < geshu; i++)
    {
        Max = num[i] < Max ? Max : num[i];
    }
    if (Max == 1)
        cout << "NO";
    else
    {
        cout << Max << endl;
        for (i = 0; i < geshu; i++)
        {
            if (num[i] == Max)
                cout << b[i] << endl;
        }
    }
    return 0;
}
