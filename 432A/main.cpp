#include <iostream>

using namespace std;

int main()
{
    int n,k,res=0,temp,Count=0;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        if(temp+k>5)
            continue;
        else
            Count++;
        if(Count==3)
        {
            res++;
            Count = 0;
        }
    }
    cout<<res<<endl;
    return 0;
}
