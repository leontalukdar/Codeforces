#include <iostream>

using namespace std;

int main()
{
    int Count=0;
    int n,m;
    int flat[101][202];
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2*m;j++)
            cin>>flat[i][j];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2*m;j+=2)
        {
            if(flat[i][j]==1 || flat[i][j+1]==1)
                Count++;
        }
    }
    cout<<Count<<endl;
    return 0;
}
