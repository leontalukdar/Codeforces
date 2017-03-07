#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n,i,stu[2001],pos[2001];
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>stu[i];
    }
    for(i=1;i<=n;i++)
    {
        int inc=1;
        for(int j=0;j<=n;j++)
        {
            if(stu[i]<stu[j])
                inc++;
        }
        pos[i]=inc;
    }
    for(i=1;i<=n;i++)
        cout<<pos[i]<<" ";
    return 0;
}
