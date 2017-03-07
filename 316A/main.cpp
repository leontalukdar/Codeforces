#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstdio>
#include <math.h>
#include <cstring>
#include <vector>
#include <algorithm>
#include <ctype.h>

using namespace std;

int main()
{
    int m,n;
    long int ar[102][102],Max,Index,temp[101]={0};
    Max = Index = 0;
    memset(ar,sizeof(ar),0);
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            cin>>ar[i][j];
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(ar[i][j]>=Max)
            {
                Max = ar[i][j];
                Index = j+1;
            }
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(ar[i][j]==Max)
            {
                if(j<Index)
                    Index = j+1;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(ar[i][j]==Max)
            {
                temp[j]++;
            }
        }
    }
    int t=0;
    for(int i=0;i<m;i++)
    {

        if(temp[i]>t)
            t = temp[i];
    }


    for(int i=0;i<m;i++)
    {
        if(temp[i]==t)
        {
            Index = i+1;
            break;
        }

    }

    cout<<Index<<endl;

    return 0;
}
