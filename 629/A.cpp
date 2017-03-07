#include <iostream>
#include <sstream>
#include <math.h>
#include <algorithm>
#include <string>
#include <map>
#include <vector>
#include <stdlib.h>
#include <stdio.h>

#define ll long long int

using namespace std;

int main()
{
    char ch[101][101];
    int n,res=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>ch[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        int temp=0;
        for(int j=0;j<n;j++)
        {
            if(ch[i][j]=='C')
                temp++;
        }
        res+=(temp*(temp-1))/2;
    }
    for(int i=0;i<n;i++)
    {
        int temp=0;
        for(int j=0;j<n;j++)
        {
            if(ch[j][i]=='C')
                temp++;
        }
        res+=(temp*(temp-1))/2;
    }
    cout<<res<<endl;
    return 0;
}
