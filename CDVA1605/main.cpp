#include <iostream>

using namespace std;


int main()
{
    int l,r,q;
    char ar[1001][1001];
    cin>>l>>r>>q;
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<r;j++)
        {
            cin>>ar[i][j];
        }
    }
    for(int i=0;i<q;i++)
    {
        int n,found=0;
        char ch;
        cin>>n;
        cin>>ch;
        for(int a=0;a<l;a++)
        {
            for(int b=0;b<r;b++)
            {
                for(int c=a;c<n;c++)
                {
                    for(int d=b;d<n;d++)
                    {
                        if(ar[c][d]==ch)
                        {
                            found=1;
                            continue;
                        }
                        else
                        {
                            found=0;
                            break;
                        }
                    }
                    if(found==0)
                        break;
                }

            }

        }
        if(found==1)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}
