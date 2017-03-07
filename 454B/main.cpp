#include <iostream>

using namespace std;

int main()
{
    int n,ar[100001],icount=1,j,flag=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
    }
    for(j=0; j<n-1; j++)
    {
        if(ar[j]<=ar[j+1])
        {
            icount++;
        }
        else
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        if(j+1==n-1)
        {
            if(ar[j+1]>ar[0])
                flag=2;
        }
        else
        {
            for(j=j+1; j<n-1; j++)
            {
                if(ar[j]<=ar[j+1]&&ar[j+1]<=ar[0])
                {
                    continue;
                }
                else
                {
                    flag=2;
                    break;
                }
            }
        }
    }
    if(flag==2)
    {
        cout<<-1<<endl;
    }
    else
        cout<<n-icount<<endl;
    return 0;
}
