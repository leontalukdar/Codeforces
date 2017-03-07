#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main()
{
    int Case,firsts,lasts,mincoin, ar[110] = {0};
    cin>>Case;
    for(int i=0;i<Case;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+Case);
    reverse(ar,ar+Case);
    for(int i=0;i<Case;i++)
    {
        firsts=lasts=mincoin=0;
        for(int j=0;j<=i;j++)
        {
            firsts+=ar[j];
            mincoin++;
        }
        for(int j=i+1;j<Case;j++)
        {
            lasts+=ar[j];
        }
        if(firsts>lasts)
            break;
    }
    cout<<mincoin<<endl;
    return 0;
}
