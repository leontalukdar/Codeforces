#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int r,b,g,n;
    cin>>n;
    string s;
    cin>>s;
    r=count(s.begin(),s.end(),'R');
    b=count(s.begin(),s.end(),'B');
    g=count(s.begin(),s.end(),'G');
    if(b>0 && g>0 && r>0)
    {
        cout<<"BGR"<<endl;
        return 0;
    }
    if(b==0 && g==0 && r>0)
    {
        cout<<"R"<<endl;
        return 0;
    }
    if(b==0 && g>0 && r==0)
    {
        cout<<"G"<<endl;
        return 0;
    }
    if(b>0 && g==0 && r==0)
    {
        cout<<"B"<<endl;
        return 0;
    }
    if(b==1 && g>1)
    {
        cout<<"BR"<<endl;
        return 0;
    }
    if(b==1 && r>1)
    {
        cout<<"BG"<<endl;
        return 0;
    }
    if(g==1 && b>1)
    {
        cout<<"GR"<<endl;
        return 0;
    }
    if(g==1 && r>1)
    {
        cout<<"BG"<<endl;
        return 0;
    }
    if(r==1 && b>1)
    {
        cout<<"GR"<<endl;
        return 0;
    }
    if(r==1 && g>1)
    {
        cout<<"BR"<<endl;
        return 0;
    }
    if(b==1 && g==1)
    {
        cout<<"R"<<endl;
        return 0;
    }
    if(b==1 && r==1)
    {
        cout<<"G"<<endl;
        return 0;
    }
    if(r==1 && g==1)
    {
        cout<<"B"<<endl;
        return 0;
    }
    cout<<"BGR"<<endl;
    return 0;
}
