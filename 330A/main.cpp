#include <iostream>

using namespace std;

int main()
{
    int r,c,countr=0,countc=0,flag,res;
    char ch[10][10];
    cin>>r>>c;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            cin>>ch[i][j];
    }
    for(int i=0;i<r;i++)
    {
        flag = 0;
        for(int j=0;j<c;j++)
        {
            if(ch[i][j]=='S')
            {
                flag = 1;
                break;
            }
        }
        if(flag != 1)
            countr++;
    }
    for(int i=0;i<c;i++)
    {
        flag = 0;
        for(int j=0;j<r;j++)
        {
            if(ch[j][i]=='S')
            {
                flag = 1;
                break;
            }
        }
        if(flag != 1)
            countc++;
    }
    res = countr*c+countc*r-countr*countc;
    cout<<res<<endl;
    return 0;
}
