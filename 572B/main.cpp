#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    char ch[1001];
    int n,s,p[1001],q[1001]= {0},count1=0,count2=0,bn=0,sn=0;
    cin>>n>>s;
    for(int i=0; i<n; i++)
    {
        cin>>ch[i];
        if(ch[i]=='B')
            bn++;
        else
            sn++;
        cin>>p[i];
        cin>>q[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(ch[i]==ch[j] && p[i]==p[j] && ch[i] == 'B')
                count1++;
            else if(ch[i]==ch[j] && p[i]==p[j] && ch[i] == 'S')
                count2++;
        }
    }
    count1 = bn - count1;
    count2 = sn - count2;
    if(count1>=s && count2<s)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(ch[i]==ch[j] && p[i]==p[j] && ch[i] == 'B')
                {
                    q[i] += q[j];
                    q[j] = 0;
                }
            }
        }
    }
    else if(count2>=s && count1<s)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(ch[i]==ch[j] && p[i]==p[j] && ch[i]=='S')
                {
                    q[i] += q[j];
                    q[j] = 0;
                }
            }
        }
    }
    else if(count1>=s && count2 >= s)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(ch[i]==ch[j] && p[i]==p[j])
                {
                    q[i] += q[j];
                    q[j] = 0;
                }
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            if(p[i]<p[j])
            {
                swap(ch[i],ch[j]);
                swap(p[i],p[j]);
                swap(q[i],q[j]);
            }
        }
    }

    for(int i=0,j=0; i<n &&j<s; i++)
    {
        if(q[i]!=0 && ch[i]=='S')
        {
            cout<<ch[i]<<" "<<p[i]<<" "<<q[i]<<endl;
            j++;
        }
    }
    for(int i=0,j=0; i<n && j<s; i++)
    {
        if(q[i]!=0 && ch[i]=='B')
        {
            cout<<ch[i]<<" "<<p[i]<<" "<<q[i]<<endl;
            j++;
        }
    }
    return 0;
}
