#include <iostream>

using namespace std;

int main()
{
    int n,ar[51][51],temp[51];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>ar[i][j];
        }
    }
    for(int i=0,k=0; i<n; i++,k++)
    {
        temp[k]=0;
        for(int j=0; j<n; j++)
        {
            if(temp[k]<ar[i][j])
            {
                temp[k]=ar[i][j];
            }
        }
    }
    int tcount=0;
    for(int i=0; i<n; i++)
    {
        int flag=0;
        for(int j=i+1; j<n; j++)
        {
            if(temp[i]==temp[j] && tcount%2==0)
            {
                temp[i] += 1;
                flag=1;
                tcount++;
                break;
            }
            else if(temp[i]==temp[j] && tcount%2!=0)
            {
                temp[i]-=1;
                flag=1;
                tcount++;
                break;
            }
        }
        if(flag==1)
        {
            i=0;
            continue;
        }
    }
    for(int i=0;i<n;i++)
        cout<<temp[i]<<" ";
    cout<<endl;
    return 0;
}
