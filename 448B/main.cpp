#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string  s,t;
    cin>>s;
    cin>>t;
    if(s.length()<t.length())
    {
        cout<<"need tree"<<endl;
        return 0;
    }
    if(s.length()==t.length())
    {
        int found=0;
        for(int i=0; i<t.length(); i++)
        {
            int count1=0,count2=0;
            count1 = count(s.begin(),s.end(),t[i]);
            count2 = count(t.begin(),t.end(),t[i]);
            if(count1==count2 && count2!=0)
            {
                found=1;
            }
            else
            {
                found=0;
                break;
            }
        }
        if(found==1)
        {
            cout<<"array"<<endl;
            return 0;
        }
        else
        {
            cout<<"need tree"<<endl;
            return 0;
        }
    }
    else
    {
        int found=0;
        int automaton=0;
        int a;
        int b=0;
        for(a=0;a<t.length();a++)
        {
            for(;b<s.length();b++)
            {
                if(t[a]==s[b])
                {
                    automaton=1;
                    b++;
                    break;
                }
                else
                    automaton=0;
            }
            if(automaton==0)
                break;
            else if(a<t.length()-1&&b==s.length())
            {
                automaton=0;
                break;
            }
        }
        if(b<=s.length()&&automaton==1&&a==t.length())
        {
            cout<<"automaton"<<endl;
            return 0;
        }
        for(int i=0; i<t.length(); i++)
        {
            int count1=0,count2=0;
            count1 = count(s.begin(),s.end(),t[i]);
            count2 = count(t.begin(),t.end(),t[i]);
            if(count1>=count2)
            {
                found=1;
            }
            else
            {
                found=0;
                break;
            }
        }
        if(found==1)
        {
            cout<<"both"<<endl;
            return 0;
        }
        else
        {
            cout<<"need tree"<<endl;
            return 0;
        }
    }
    return 0;
}
