#include <iostream>

using namespace std;

int main()
{
    int ar[10000][2],n,temp1,temp2,s,flag = 0;
    cin>>s>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i][0]>>ar[i][1];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ar[i][0]>ar[j][0])
            {
                temp1 = ar[i][0];
                temp2 = ar[i][1];
                ar[i][0]=ar[j][0];
                ar[i][1] = ar[j][1];
                ar[j][0] = temp1;
                ar[j][1] = temp2;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(s>ar[i][0])
        {
            s += ar[i][1];
        }
        else
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
