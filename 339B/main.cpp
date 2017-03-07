#include <iostream>

using namespace std;

int main()
{
    long long int n,m,i,Count=0,prev=1,pres,temp;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>pres;
        if(pres>prev)
            temp = pres - prev;
        else if(pres<prev)
            temp = (pres - prev) + n;
        else
            temp = 0;
        prev = pres;
        Count = Count + temp;
    }
    cout<<Count<<endl;
    return 0;
}
