#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int ar[101],n,mini,maxi,mincount,maxcount,Count,i,j;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>ar[i];
    mini = *min_element(ar,ar+n);
    maxi = *max_element(ar,ar+n);
    mincount=maxcount=Count=0;
    for(i=0;i<n;i++)
    {
        if(ar[i]<maxi)
            maxcount++;
        else
            break;
    }
    for(j=n-1;j>=0;j--)
    {
        if(ar[j]>mini)
            mincount++;
        else
            break;
    }
    Count = mincount + maxcount;
    if(i>j)
        Count--;
    cout<<Count<<endl;
    return 0;
}
