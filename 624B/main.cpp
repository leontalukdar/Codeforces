#include <iostream>

using namespace std;

int main()
{
    int ar[27];
    long long int res=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int i=0;i<n-1;i++)
    {
        if(ar[i]==0)
            continue;
        for(int j=i+1;j<n;j++)
        {
            if(ar[j]==0)
                continue;
            if(ar[i]==ar[j])
            {
                ar[i]--;
                i=-1;
                break;
            }
        }
    }
    for(int i=0;i<n;i++)
        res += ar[i];
    cout<<res<<endl;
    return 0;
}
