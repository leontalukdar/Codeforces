#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<long int> myvec;
    int i,n,indexlow,indexhigh;
    cin>>n;
    for(i=0; i<n; i++)
    {
        int x;
        cin>>x;
        myvec.push_back(x);
    }
    if(is_sorted(myvec.begin(),myvec.end()))
    {
        cout<<"yes"<<endl;
        cout<<1<<' '<<1<<endl;
    }
    else
    {
        for(i=0; i<n-1; i++)
        {
            if(myvec[i]>myvec[i+1])
            {
                indexlow = i;
                break;
            }
        }
        for(i=n-1; i>0; i--)
        {
            if(myvec[i]<myvec[i-1])
            {
                indexhigh = i+1;
                break;
            }
        }
        reverse(myvec.begin()+indexlow,myvec.begin()+indexhigh);
        if(is_sorted(myvec.begin(),myvec.end()))
        {
            cout<<"yes"<<endl;
            cout<<indexlow+1<<' '<<indexhigh<<endl;
        }
        else
            cout<<"no"<<endl;
    }
    return 0;
}
