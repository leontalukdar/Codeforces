#include <iostream>

using namespace std;

int main()
{
    int a[101][101],b[101][101];
    int n,m;
    cin>>m>>n;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            a[i][j]=1;
            cin>>b[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(b[i][j]==0)
            {
                for(int k=0;k<m;k++)
                {
                    a[k][j]=0;
                }
                for(int l=0;l<n;l++)
                    a[i][l]=0;
            }
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            int t=0;
            for(int k=0;k<m;k++)
                t |= a[k][j];
            for(int l=0;l<n;l++)
                t |= a[i][l];
            if(t != b[i][j])
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
