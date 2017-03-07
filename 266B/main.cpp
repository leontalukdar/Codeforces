#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
    int n,i,j,len;
    char ch[10000];
    cin>>len>>n;
    for(i=0;i<len;i++)
        cin>>ch[i];
    for(i=0;i<n;i++)
    {
        for(j=0;j<len;j++)
        {
            if(ch[j] == 'B' && ch[j+1]=='G')
            {
                swap(ch[j],ch[j+1]);
                j++;
            }
        }
    }
    printf("%s\n",ch);
    return 0;
}
