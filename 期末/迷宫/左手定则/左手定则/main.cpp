#include<iostream>
using namespace std;
int main()
{
    int n,m;
    int sum=0;
    while(cin>>n>>m)
    {
        
        char der='\0';//用来表示方向
        char board[1000][1000][5]={'\0'};//[0]用来记录迷宫的符号，[1],[2],[3],[4]分别记录走到该位置时面对的方向，依次为 北南西东。
        int sx=0,sy=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            {
                cin>>board[i][j][0];
                if(board[i][j][0]=='S')//找到起点位置
                {
                    sx=i;
                    sy=j;
                }
            }
        cin>>der;//输入开始时面对的方向
        switch(der)//‘*’表示在起点时面对的方向
        {
            case 'N':board[sx][sy][1]='*';break;
            case 'S':board[sx][sy][2]='*';break;
            case 'E':board[sx][sy][4]='*';break;
            default:board[sx][sy][3]='*';break;
        }
        while(1)
        {
            int judge=0;
            switch(der)
            {
                case 'N':
                    if(board[sx][sy-1][0]!='#'){der='W';sy--;}//左
                    else if(board[sx-1][sy][0]!='#'){der='N';sx--;}//前
                    else if(board[sx][sy+1][0]!='#'){der='E';sy++;}//右
                    else if(board[sx+1][sy][0]!='#'){der='S';sx++;}//后
                    else {cout<<"NO"<<endl;judge=1;}
                    break;
                case 'S':
                    if(board[sx][sy+1][0]!='#'){der='E';sy++;}
                    else if(board[sx+1][sy][0]!='#'){der='S';sx++;}
                    else if(board[sx][sy-1][0]!='#'){der='W';sy--;}
                    else if(board[sx-1][sy][0]!='#'){der='N';sx--;}
                    else {cout<<"NO"<<endl;judge=1;}
                    break;
                case 'E':
                    if(board[sx-1][sy][0]!='#'){der='N';sx--;}
                    else if(board[sx][sy+1][0]!='#'){der='E';sy++;}
                    else if(board[sx+1][sy][0]!='#'){der='S';sx++;}
                    else if(board[sx][sy-1][0]!='#'){der='W';sy--;}
                    else {cout<<"NO"<<endl;judge=1;}
                    break;
                case 'W':
                    if(board[sx+1][sy][0]!='#'){der='S';sx++;}
                    else if(board[sx][sy-1][0]!='#'){der='W';sy--;}
                    else if(board[sx-1][sy][0]!='#'){der='N';sx--;}
                    else if(board[sx][sy+1][0]!='#'){der='E';sy++;}
                    else {cout<<"NO"<<endl;judge=1;}
                    break;
            }
            if(judge==1)break;
            if(board[sx][sy][0]=='T')//找到‘T’时输出“YES”
            {
                cout<<"YES"<<endl;
                sum++;
                break;
            }
            else if((der=='N'&&board[sx][sy][1]=='*')||(der=='S'&&board[sx][sy][2]=='*')||(der=='W'&&board[sx][sy][3]=='*')||(der=='E'&&board[sx][sy][4]=='*'))//如果回到了原来的位置，且在该位置时面对的方向和原来相同，则已经开始走重复的路，说明不能走到‘T’的位置
            {
                cout<<"NO"<<endl;
                sum++;
                break;
            }
            else//如果游戏还没结束，则继续记录走到该位置时面对的方向
            {
                switch(der)
                {
                    case 'N':board[sx][sy][1]='*';break;
                    case 'S':board[sx][sy][2]='*';break;
                    case 'E':board[sx][sy][4]='*';break;
                    default:board[sx][sy][3]='*';break;
                }
            }
        }
        
    }
}
/*
 8 10
 ##########
 #...T....#
 #.####...#
 #.#..#.#.#
 #.#....#.#
 #.####.#.#
 #......#S#
 ##########
 N
 
 8 10
 ##########
 #........#
 #.####...#
 #.#T.#.#.#
 #.#....#.#
 #.####.#.#
 #......#S#
 ##########
 N
 
 8 10
 ##########
 #....#...#
 #..#.#...#
 #..#.....#
 #..#.#S###
 #..#.#...#
 #....#T..#
 ##########
 N
 
 */