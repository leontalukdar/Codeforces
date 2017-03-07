#include <iostream>

using namespace std;

int main()
{
    int n,v,sellernum=0,l=0;
    int seller[51][51],k[51],s[51];
    cin>>n>>v;
    for(int i=0;i<n;i++)
    {
        cin>>k[i];
        for(int j=0;j<k[i];j++)
        {
            cin>>seller[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<k[i];j++)
        {
            if(seller[i][j]<v)
            {
                sellernum++;
                s[l]=i+1;
                l++;
                break;
            }
        }
    }
    cout<<sellernum<<endl;
    for(int i=0;i<l;i++)
    {
        cout<<s[i]<<" ";
    }
    return 0;
}
