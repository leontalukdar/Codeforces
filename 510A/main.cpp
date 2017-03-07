#include <iostream>

using namespace std;

int main()
{
    int n,m,flag=0;
    char ch[51][51];
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(i%2!=0)
                ch[i][j] = '#';
            else
            {
                if(flag == 0)
                {
                    ch[i][j] = '.';
                    if(j==m)
                    {
                        ch[i][j] = '#';
                        flag = 1;
                    }
                }
                else if(flag == 1)
                {
                    if(j==1)
                        ch[i][j]='#';
                    else
                        ch[i][j]='.';
                    if(j==m)
                        flag = 0;
                }
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cout<<ch[i][j];
        }
        cout<<endl;
    }
    return 0;
}
