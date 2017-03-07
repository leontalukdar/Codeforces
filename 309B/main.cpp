#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int main()
{
    int Count[110],rowcount,k;
    unsigned int n;
    cin>>n;
    string *collection = new string[n];
    for(unsigned int i=0;i<n;i++)
    {
        cin>>collection[i];
    }
    for(unsigned int i=0,k=0;i<n;i++,k++)
    {
        rowcount =0;
        for(unsigned int j=i;j<n;j++)
        {
            if(collection[i] == collection[j])
                rowcount++;
        }
        Count[k]=rowcount;
    }
    sort(Count,Count+n);
    cout<<Count[n-1]<<endl;
    return 0;
}
