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
    char gender[5001];
    int n,start[5001],finish[5001];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>gender[i]>>start[i]>>finish[i];
    }
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(start[i]>start[j])
            {
                char temp1;
                int temp2,temp3;
                temp1=gender[j];
                temp2=start[j];
                temp3=finish[j];
                gender[j]=gender[i];
                start[j]=start[i];
                finish[j]=finish[i];
                gender[i]=temp1;
                start[i]=temp2;
                finish[i]=temp3;
            }
        }
    }
    int finalcount=0;
    for(int i=start[0];i<=start[n-1];i++)
    {
        int mcount=0,fcount=0;
        for(int j=0;j<n;j++)
        {
            if(start[j]<=i && finish[j]>=i)
            {
                if(gender[j]=='M')
                    mcount++;
                else
                    fcount++;
            }
        }
        int tempcount=2*(min(mcount,fcount));
        if(finalcount<tempcount)
            finalcount=tempcount;
    }
    cout<<finalcount<<endl;
    return 0;
}
