#include <iostream>

using namespace std;

int main()
{
    int n,flag=0;
    cin>>n;
    int ar[2][n+1];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
            cin>>ar[i][j];
    }
    if(n==1)
        cout<<-1<<endl;
    else if(n==2)
    {
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<2;j++)
            {
                if(ar[i][j]==ar[i+1][0] || ar[i][j]==ar[i+1][1])
                {
                    flag = 1;
                    break;
                }
            }
            if(flag==1)
            {
                cout<<-1<<endl;
                break;
            }
        }
        if(flag == 0)
            cout<<1<<endl;
    }
    else
        cout<<1<<endl;
    return 0;
}
