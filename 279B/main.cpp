#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int ar[100001]={0},n,t,bcount=1,sum=0,res=0;
    cin>>n>>t;
    for(int i=1;i<=n;i++)
    {
        cin>>ar[i];
        sum += ar[i];
        while(sum>t)
            sum -= ar[bcount++];
        if(res<i-bcount+1)
            res=i-bcount+1;
    }
    cout<<res<<endl;
    return 0;
}
