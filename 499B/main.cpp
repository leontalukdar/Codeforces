#include <iostream>
#include <string>
#include <cstring>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
    string mystring[3001][2];
    string str[3001];
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<2;j++)
            cin>>mystring[i][j];
    }
    getchar();
    for(int i=0;i<n;i++)
        cin>>str[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(str[i]==mystring[j][0])
            {
                if(mystring[j][0].length() > mystring[j][1].length())
                {
                    str[i].clear();
                    str[i]=mystring[j][1];
                }
            }
        }
    }
    for(int i=0;i<n;i++)
        cout<<str[i]<<" ";
    return 0;
}
